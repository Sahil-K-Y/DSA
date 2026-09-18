class Solution {
public:
    int pivotIndex(vector<int>& nums) {
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