class Solution {
public:
    int ans=0;
    void search(vector<vector<int>>& grid,int row,int col,int count){
        if(row<0 || col<0 || row>=grid.size()||col>=grid[0].size()||grid[row][col]==-1)return;
        if(grid[row][col]==2){
            if(count==0){
                ans++;
            }
            
            return ;
        }
        int original=grid[row][col];
        int temp=count;
        grid[row][col]=-1;
        if(original==0){
            temp--;
        }
        // if(grid[row][col]==0){
        //     grid[row][col]=-1;
        search(grid,row+1,col,temp);
        search(grid,row-1,col,temp);
        search(grid,row,col+1,temp);
        search(grid,row,col-1,temp);
        grid[row][col]=original;
        // }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int row,col;
        ans=0;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    count++;
                }else if(grid[i][j]==1){
                    row=i;
                    col=j;
                }
            }
        }
        search(grid,row,col,count);
        return ans;
    }
};