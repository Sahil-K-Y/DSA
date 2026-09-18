class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // vector<int>pre(nums.size(),0);
        // int n=nums.size();
        // int suff=nums[nums.size()-1];
        // for(int i=n-2;i>=0;i--){
        //     pre[i]=pre[i+1]+nums[i+1];
        // }
        // for(int i=1;i<n;i++){
        //     if(suff-pre[i]==0){
        //         return i;
        //     }
        //     suff+=nums[i];
        // }
        int n=nums.size();
        int total=0;
        for(int x:nums)total+=x;
        int sum=0;
        for(int i=0;i<n;i++){
            total-=nums[i];
            if(sum==total)return i;
            sum+=nums[i];
        }
        return -1;
    }
};