class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n  = matrix[0].size();
        
        for(int i = 0;i<m;i++){
            for(int j =i;j<n;j++){
                // int a = matrix[i][j] ;
                // matrix[i][j] = matrix[j][i];
                // matrix[j][i] = a;
                
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int col_start = 0;
        int col_end = n-1;
        while(col_start<col_end) {
        for(int i =0;i<m;i++){
            swap(matrix[i][col_start],matrix[i][col_end]);
            // int a = matrix[col_start][i] ;
                // matrix[col_start][i] = matrix[col_end][i];
                // matrix[col_end][i]=a;
           
        }
         col_start++;
                 col_end--;
        }
        
    }
};