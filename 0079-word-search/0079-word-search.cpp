
class Solution {
public:
    bool search(vector<vector<char>>& board, int row, int col,
                int ind, string& word) {

        // Word complete
        if (ind == word.size())
            return true;

        // Boundary check
        if (row < 0 || col < 0 ||
            row >= board.size() ||
            col >= board[0].size())
            return false;

        // Character mismatch
        if (board[row][col] != word[ind])
            return false;

        // Mark current cell as visited
        char original = board[row][col];
        board[row][col] = '#';

        bool found =
            search(board, row + 1, col, ind + 1, word) ||
            search(board, row - 1, col, ind + 1, word) ||
            search(board, row, col + 1, ind + 1, word) ||
            search(board, row, col - 1, ind + 1, word);

        // Restore original character
        board[row][col] = original;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty() || word.empty())
            return false;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    if (search(board, i, j, 0, word))
                        return true;
                }
            }
        }

        return false;
    }
};
