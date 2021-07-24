class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        
        if(matrix.size()==0)
            return ans;
        
        
        
        int row_start = 0;
        int row_end = matrix.size()-1;
        int col_start = 0;
        int col_end = matrix[0].size()-1;
        
        
        while(row_start<=row_end && col_start<=col_end)
        {
            for(int col = col_start;col<=col_end;col++)
                ans.push_back(matrix[row_start][col]);
            
            row_start++;
            
            if (!(row_start<=row_end && col_start<=col_end)) break;
            
            
            for(int row = row_start;row<=row_end;row++)
                ans.push_back(matrix[row][col_end]);
            
            col_end--;
            
            if (!(row_start<=row_end && col_start<=col_end)) break;
            for(int col =  col_end;col>=col_start;col--)
                ans.push_back(matrix[row_end][col]);
            
            row_end--;
           
            if (!(row_start<=row_end && col_start<=col_end)) break;
            for(int row = row_end;row>=row_start;row--)
            ans.push_back(matrix[row][col_start]);
            
            col_start++;
        
        }
        return ans;
    }
};