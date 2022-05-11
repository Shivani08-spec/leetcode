// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code 
       int lis[n];
       for(int i=0;i<n;i++){
           lis[i]=1;
       }
     int j =0;int i =1;
     while(i<n){
     while(j<i){
         if(a[j]<a[i] && lis[i]<=lis[j]){
             lis[i]= 1+lis[i];
         }
         
         j++;
     }
     i++; 
     j=0;
     }
     
     int mx =0;
     for(int i=0;i<n;i++){
         if(lis[i]>mx){
             mx = lis[i];
         }
     }
     return mx;
       }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends