class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> left(n), right(n);
        stack<int> s;

        // Previous smaller element
        for (int i = 0; i < n; i++) {
            while (!s.empty() &&
                   heights[s.top()] >= heights[i]) {
                s.pop();
            }

            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        // Next smaller element
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() &&
                   heights[s.top()] >= heights[i]) {
                s.pop();
            }

            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = width * heights[i];

            ans = max(ans, area);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols, 0);
        int ans = 0;

        for (int i = 0; i < rows; i++) {
            // Step 1: Update histogram heights
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }

            // Step 2: Apply LC 84
            ans = max(ans, largestRectangleArea(heights));
        }

        return ans;
    }
};