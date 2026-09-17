class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>pre(nums.size(),1);
        vector<int>suff(nums.size(),1);
        int n=nums.size();
        for(int i=1;i<n;i++){

            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }

        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*suff[i];
        }
        return ans;
    }
};