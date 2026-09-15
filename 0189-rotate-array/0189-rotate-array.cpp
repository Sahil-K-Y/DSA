class Solution {
public:
    void revk(vector<int>&nums,int left,int right){
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        revk(nums,0,n-1);
        revk(nums,0,k-1);

        revk(nums,k,n-1);
    }
};