class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int s_len = s.length();
        int p_len = p.length();

        if (s_len < p_len) return ans;

        vector<int> p_cnt(26, 0);
        vector<int> s_cnt(26, 0);

        // First window setup
        for (int i = 0; i < p_len; i++) {
            p_cnt[p[i] - 'a']++;
            s_cnt[s[i] - 'a']++;
        }

        if (p_cnt == s_cnt) {
            ans.push_back(0);
        }

        // Sliding window: right character add, left character drop
        for (int i = p_len; i < s_len; i++) {
            s_cnt[s[i] - 'a']++;               // Window expand
            s_cnt[s[i - p_len] - 'a']--;       // Window shrink

            if (s_cnt == p_cnt) {
                ans.push_back(i - p_len + 1);
            }
        }

        return ans;
    }
};