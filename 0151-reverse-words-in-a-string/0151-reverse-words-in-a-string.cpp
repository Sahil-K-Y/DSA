class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                reverse(word.begin(), word.end());
                if (!ans.empty()) ans += " ";
                ans += word;
                word = "";
            }
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!ans.empty()) ans += " ";
            ans += word;
        }

        return ans;
    }
};