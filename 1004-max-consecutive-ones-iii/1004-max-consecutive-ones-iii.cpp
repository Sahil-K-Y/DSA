class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l=0;
        int ans=0;
        int zeros=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0)zeros--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};