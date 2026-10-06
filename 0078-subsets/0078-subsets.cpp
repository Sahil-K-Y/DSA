class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&curr,int index){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        helper(nums,ans,curr,index+1);
        curr.pop_back();
        helper(nums,ans,curr,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;

        vector<vector<int>>ans;
        int index=0;
        helper(nums,ans,curr,index);

        return ans;
    }
};