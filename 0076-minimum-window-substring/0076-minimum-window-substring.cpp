class Solution {
public:
    string minWindow(string s, string t) {
        // int ans=0;
        // int l=0;
        vector<int>need(128,0);
        for(char c:t){
            need[c]++;

        }
        int missing=t.size();

        int st=0;
        int ans=INT_MAX;
        int l=0;
        for(int r=0;r<s.size();r++){
            if(need[s[r]]>0)missing--;
            need[s[r]]--;
            while(missing==0){
                if(r-l+1<ans){
                    ans=r-l+1;
                    st=l;
                }
                need[s[l]]++;
                if(need[s[l]]>0)missing++;
                l++;
            }
        }
        return ans==INT_MAX?"":s.substr(st,ans);
    }
};