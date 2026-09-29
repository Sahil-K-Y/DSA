class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int l=0;
        int maxfreq=0;
        vector<int>count(26,0);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            count[ch-'A']++;

            maxfreq=max(maxfreq,count[ch-'A']);
            if((i-l+1)-maxfreq>k){
                count[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);

        }
        return ans;
    }
};