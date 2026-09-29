class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last;
        int left = 0;
        int ans = 0;

        for(int right=0;right<s.size();right++){
            char ch=s[right];
            if(last.count(ch)){
                left=max(left,last[ch]+1);
            }
            last[ch]=right;
            ans=max(ans,right-left+1);
        }

        return ans;
    }
};