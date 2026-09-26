class Solution {
public:
    string longestPalindrome(string s) {
        int ans=0;
        int start=0;
        auto expand=[&](int l,int r){
            int len=0;

            while (l>=0 && r<s.size() && s[l]==s[r]){
                l--;
                r++;
            }
            len=r-l-1;
            if(len>ans){
                ans=len;
                start = l+1;
            }
        };
        for(int i=0;i<s.size();i++){
            expand(i,i);
            expand(i,i+1);
        }
        return s.substr(start,ans);
    }
};