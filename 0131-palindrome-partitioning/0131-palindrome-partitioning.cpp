class Solution {
public:
    vector<vector<string>> ans;
    vector<string> path;

    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void backtrack(string& s, int start) {
        if (start == s.size()) {
            ans.push_back(path);
            return;
        }

        for (int end = start; end < s.size(); end++) {
            if (!isPalindrome(s, start, end)) {
                continue;
            }

            path.push_back(s.substr(start, end - start + 1));

            backtrack(s, end + 1);

            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        ans.clear();
        path.clear();

        backtrack(s, 0);
        return ans;
    }
};