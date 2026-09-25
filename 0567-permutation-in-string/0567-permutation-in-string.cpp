class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;


        vector<int> target(26, 0);
        for (char c : s1) {
            target[c - 'a']++;
        }

       
        for (int i = 0; i <= (int)s2.size() - (int)s1.size(); i++) {
            vector<int> current(26, 0);
            for (int j = i; j < i + s1.size(); j++) {
                current[s2[j] - 'a']++;
            }

            if (current == target) {
                return true;
            }
        }

        return false;
    }
};