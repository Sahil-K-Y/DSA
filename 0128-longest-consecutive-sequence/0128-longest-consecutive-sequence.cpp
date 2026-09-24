class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxlen=0;
        for(int i:st){
            if(!st.count(i-1)){
                int curr=i;
                int len=1;
                while(st.count(curr+1)){
                    len++;
                    curr++;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};