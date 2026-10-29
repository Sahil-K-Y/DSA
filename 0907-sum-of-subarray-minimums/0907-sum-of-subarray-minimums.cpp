class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long MOD = 1e9 + 7;
        vector<int> pse(n, -1), nse(n, n);
        stack<int> st;

        // 1. Previous Smaller Element (Strictly Smaller '<')
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        // 2. Next Smaller or Equal Element ('<=')
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // 3. Contribution of each arr[i]
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            long long left = i - pse[i];
            long long right = nse[i] - i;
            long long ways = (left * right) % MOD;
            long long contrib = (ways * arr[i]) % MOD;
            totalSum = (totalSum + contrib) % MOD;
        }
        return totalSum;
    }
};