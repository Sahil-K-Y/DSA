class Solution {
public:
    void dfs(int ind,vector<int>&curr,vector<vector<int>>&ans,int target,int k){
        if(target==0 && curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if(target<0 ){
            return;
        }
        for(int i=ind;i<=9;i++){
            curr.push_back(i);
            dfs(i+1,curr,ans,target-i,k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>curr;

        vector<vector<int>>ans;
        dfs(1,curr,ans,n,k);

        return ans;
    }
};