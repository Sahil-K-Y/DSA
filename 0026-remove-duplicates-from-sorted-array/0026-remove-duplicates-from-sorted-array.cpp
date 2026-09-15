class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int val=nums[k];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};