class Solution {
public:
    void dfs(int ind,vector<int>&nums,vector<int>&curr,vector<vector<int>>&ans){
        bool  added=false;
        if(ind==nums.size()){
            if(curr.size()>1){

                ans.push_back(curr);
            }
            return;
        }
        if(curr.empty() || curr.back()<=nums[ind]){
            curr.push_back(nums[ind]);
            added=true;
        }
        dfs(ind+1,nums,curr,ans);
        if(added){
            curr.pop_back();
        }
        dfs(ind+1,nums,curr,ans);
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>curr;
        int ind=0;
        vector<vector<int>>ans;

        dfs(ind,nums,curr,ans);
        set<vector<int>> uniqueAns(ans.begin(), ans.end());
        return vector<vector<int>>(uniqueAns.begin(), uniqueAns.end());
    }
};