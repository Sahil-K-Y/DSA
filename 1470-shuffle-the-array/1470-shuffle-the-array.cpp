class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int j=n;
        for(int i=0;i<nums.size()/2;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j++]);
        }
        return ans;
    }
};