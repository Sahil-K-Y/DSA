class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(target<=sum){
                sum-=nums[l];
                ans=min(ans,i-l+1);
                l++;
            }
            
        }
        
        return (ans!=INT_MAX)?ans:0;
    }
};