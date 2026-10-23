class Solution {
public:
    vector<string> ans;

    bool isvalid(const string& s, int start, int len) {
        if (len < 1 || len > 3 || start + len > s.size()) return false;
        if (len > 1 && s[start] == '0') return false;
        
        int val = stoi(s.substr(start, len));
        return val <= 255;
    }

    void check(const string& s, int ind, int segmentCount, string curr) {
        if (segmentCount == 4) {
            if (ind == s.size()) {
                curr.pop_back(); // Remove the trailing '.'
                ans.push_back(curr);
            }
            return;
        }

        for (int len = 1; len <= 3; len++) {
            if (ind + len <= s.size() && isvalid(s, ind, len)) {
                string segment = s.substr(ind, len);
                check(s, ind + len, segmentCount + 1, curr + segment + ".");
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        if (s.size() < 4 || s.size() > 12) return {};
        check(s, 0, 0, "");
        return ans;
    }
};