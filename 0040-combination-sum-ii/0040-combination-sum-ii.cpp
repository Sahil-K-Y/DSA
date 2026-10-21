class Solution {
public:
    void dfs(int ind,vector<int>&nums,vector<int>&curr,vector<vector<int>>&ans,int target){
        if(target==0){
            ans.push_back(curr);
            return;
        }

        if(target<0 || ind==nums.size()){
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])continue;
            curr.push_back(nums[i]);

            dfs(i+1,nums,curr,ans,target-nums[i]);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>curr;
        vector<vector<int>>ans;
        dfs(0,candidates,curr,ans,target);
        return ans;
    }
};