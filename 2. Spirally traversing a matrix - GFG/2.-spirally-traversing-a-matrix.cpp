// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        // code here 
        int row_start = 0;
        int row_end = r-1;
        int column_start =0;
        int column_end = c-1;
       
       while(row_start<=row_end && column_start<=column_end){
           
           if(row_start<=row_end && column_start<=column_end){
           for(int col = column_start;col<=column_end;col++){
               ans.push_back(matrix[row_start][col]);
           }
           }
           row_start++;
           if(row_start<=row_end && column_start<=column_end){
           for(int row= row_start;row<=row_end;row++){
               ans.push_back(matrix[row][column_end]);
           }
           }
           column_end--;
           if(row_start<=row_end && column_start<=column_end){
           for(int col = column_end;col>=column_start;col--){
               ans.push_back(matrix[row_end][col]);
           }
           }
           row_end--;
           if(row_start<=row_end && column_start<=column_end){
           for(int row = row_end;row>=row_start;row--){
               ans.push_back(matrix[row][column_start]);
           }
           }
           column_start++;
       }
       
       return ans;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends