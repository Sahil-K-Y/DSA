class Solution {
public:
    void dfs(int ind,vector<int>&nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int>used;
        for(int i=ind;i<nums.size();i++){
            if(used.count(nums[i])){
                continue;
            }
            used.insert(nums[i]);
            swap(nums[i],nums[ind]);
            dfs(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;

        dfs(0,nums,ans);

        return ans;
    }
};