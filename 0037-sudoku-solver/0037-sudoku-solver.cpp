class Solution {
public:
    bool issafe(vector<vector<char>>&board,int row,int col,char dig){
        for(int i=0;i<9;i++){
            if(board[row][i]==dig)return false;
            if(board[i][col]==dig)return false;
            int boxrow = 3 * (row / 3) + i / 3;
            int boxcol=3*(col/3) +i%3;
            if(board[boxrow][boxcol]==dig)return false;
        }
        return true;
    }
    bool helper(vector<vector<char>>&board){
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.'){
                    for(char i='1';i<='9';i++){
                        if(issafe(board,row,col,i)){
                            board[row][col]=i;
                            if(helper(board)){

                                return true;
                            }
                            board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
};