class Solution {
public:
    int ans=0;
    void gold(vector<vector<int>>& grid,int row,int col,int store){
        if(row<0||col<0||row>=grid.size() || col>=grid[0].size()){
            return;
        }
        if(grid[row][col]==0)return;
        int original=grid[row][col];
        int amount=store;
        amount+=grid[row][col];
        ans=max(ans,amount);
        grid[row][col]=0;
        gold(grid,row+1,col,amount);
        gold(grid,row-1,col,amount);
        gold(grid,row,col+1,amount);
        gold(grid,row,col-1,amount);
        grid[row][col]=original;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)continue;
                gold(grid,i,j,0);
            }
        }
        return ans;
    }
};