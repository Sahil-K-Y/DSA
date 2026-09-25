class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();

        int k=s1.size();
        if(k>n)return false;

        vector<int>c1(26,0);
        vector<int>c2(26,0);
        for(char c:s1){
            c1[c-'a']++;
        }
        for(int i=0;i<n;i++){
            c2[s2[i]-'a']++;
            if(i>=k){
                c2[s2[i-k]-'a']--;
            }

            if(c1==c2)return true;
        }
        return false;

    }
};