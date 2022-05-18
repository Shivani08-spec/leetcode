// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}// } Driver Code Ends


/*You are required to complete this method*/
int findK(int matrix[MAX][MAX], int n, int m, int k)
{
//Your code here
vector<int>ans;
        // code here 
        int row_start = 0;
        int row_end = n-1;
        int column_start =0;
        int column_end = m-1;
       
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
       
              return ans[k-1];

}

