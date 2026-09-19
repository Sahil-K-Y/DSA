class Solution {
public:
    void Trans(vector<vector<int>>&mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
    void rev(vector<vector<int>>&mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            int j=0,k=n-1;
            while(j<k){
                swap(mat[i][j],mat[i][k]);
                j++;
                k--;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        Trans(matrix);
        rev(matrix);
    }
};