class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> freq;
        int left = 0;
        int right = 0;
        int minlength = INT_MAX;
        int count = 0;
        int sIndex = -1;
        for (int i = 0; i < t.size(); i++) {
            freq[t[i]]++;
        }
        while (right < s.size()) {
            if (freq[s[right]] > 0) {
                count++;
            }
            freq[s[right]]--;
            right++;
            while (count == t.size()) {
                if (right - left < minlength) {
                    minlength = right - left;
                    sIndex = left;
                }
                freq[s[left]]++;
                if (freq[s[left]] > 0) {
                    count--;
                }
                left++;
            }
        }
        if (sIndex == -1) {
            return "";
        }
        return s.substr(sIndex, minlength);
    }
};