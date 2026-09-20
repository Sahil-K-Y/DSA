class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        bool first_row = false;
        bool first_col = false;

        // Check first row
        for(int j = 0; j < n; j++){
            if(matrix[0][j] == 0){
                first_row = true;
                break;
            }
        }

        // Check first column
        for(int i = 0; i < m; i++){
            if(matrix[i][0] == 0){
                first_col = true;
                break;
            }
        }

        // Use first row and first column as markers
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){

                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeroes using markers
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){

                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero first row
        if(first_row){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }

        // Zero first column
        if(first_col){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};