class Solution {
public:

    void dfs(int st,vector<int>&curr,vector<vector<int>>&ans,int n,int k){
        if(k==curr.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=st;i<=n;i++){
            curr.push_back(i);
            dfs(i+1,curr,ans,n,k);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        vector<vector<int>>ans;
        dfs(1,curr,ans,n,k);

        return ans;
    }
};