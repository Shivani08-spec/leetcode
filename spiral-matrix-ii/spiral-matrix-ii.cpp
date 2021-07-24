class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
       
	vector<vector<int>>matrix;
	for(int i=0; i<n; i++)
    {
        
    vector<int> tmp(n,0);
    matrix.push_back(tmp);
	
	}
	
	int row_start = 1;
	int row_end = n;
	int col_start = 1;
	int col_end = n;
        int num = 1;
	
	
	while(row_start<=row_end && col_start<=col_end)
	{
		for(int col = col_start;col<=col_end;col++)
			matrix[row_start-1][col-1] = num++;
		
		row_start++;

		if (!(row_start<=row_end && col_start<=col_end)) break;
		
		for(int row = row_start;row<=row_end;row++)
			matrix[row-1][col_end-1] = num++;
		
		col_end--;

		if (!(row_start<=row_end && col_start<=col_end)) break;
		
		for(int col =  col_end;col>=col_start;col--)
			matrix[row_end-1][col-1] = num++;
		
		row_end--;

		if (!(row_start<=row_end && col_start<=col_end)) break;
		
		for(int row = row_end;row>=row_start;row--)
		   matrix[row-1][col_start-1] = num++;
		
		col_start++;
	
	}
	return matrix;
}
        
        
        

};