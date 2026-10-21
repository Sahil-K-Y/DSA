class Solution {
public:
    int count = 0;
    vector<bool> colUsed, diag1Used, diag2Used;

    void backtrack(int row, int n) {
        if (row == n) {
            count++;
            return;
        }
        for (int col = 0; col < n; col++) {
            int d1 = row - col + n;
            int d2 = row + col;
            if (colUsed[col] || diag1Used[d1] || diag2Used[d2]) continue;

            colUsed[col] = diag1Used[d1] = diag2Used[d2] = true;
            backtrack(row + 1, n);
            colUsed[col] = diag1Used[d1] = diag2Used[d2] = false;
        }
    }

    int totalNQueens(int n) {
        colUsed.assign(n, false);
        diag1Used.assign(2 * n, false);
        diag2Used.assign(2 * n, false);
        backtrack(0, n);
        return count;
    }
};