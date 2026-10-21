class Solution {
public:
    set<vector<int>>used;
    void dfs(int ind,vector<int>&nums,vector<int>&curr,vector<vector<int>>&ans,int target){
        if(target==0){
            if(used.find(curr)==used.end()){
                ans.push_back(curr);
                used.insert(curr);
            }
            return ;
        }
        if(ind==nums.size() || target<0)return;
        curr.push_back(nums[ind]);
        dfs(ind+1,nums,curr,ans,target-nums[ind]);
        dfs(ind,nums,curr,ans,target-nums[ind]);
        curr.pop_back();
        dfs(ind+1,nums,curr,ans,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        vector<vector<int>>ans;

        dfs(0,candidates,curr,ans,target);
        return ans;
    }
};