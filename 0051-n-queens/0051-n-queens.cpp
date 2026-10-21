class Solution {
public:
    vector<vector<string>>ans;
    vector<bool>cols,diagonal1,diagonal2;
    void dfs(int row,int n,vector<string>&board){
        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int col=0;col<n;col++){
            int d1=row-col+n;
            int d2=row+col;
            if(cols[col] || diagonal1[d1] || diagonal2[d2])continue;
            board[row][col]='Q';
            cols[col]=diagonal1[d1]=diagonal2[d2]=true;
            dfs(row+1,n,board);

            board[row][col]='.';
            cols[col]=diagonal1[d1]=diagonal2[d2]=false;
            

        }
    }
    vector<vector<string>> solveNQueens(int n) {
        cols.assign(n, false);
        diagonal1.assign(2 * n, false);
        diagonal2.assign(2 * n, false);
        vector<string>board(n,string(n,'.'));
        dfs(0,n,board);

        return ans;

    }
};