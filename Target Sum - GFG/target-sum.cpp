// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  int count(vector<int>& nums, int x,int n){
       
       int  t[n+1][x+1];
       for(int i=0;i<=n;i++){
           for(int j=0;j<=x;j++){
               if(i==0){
                   t[i][j]=0;
               }
                if(j==0){
                   t[i][j]=1;
               }
           }
       }
           for(int i=1;i<=n;i++){
           for(int j=0;j<=x;j++){
               if(nums[i-1]<=j){
                   t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
               }
               else{
                   t[i][j]=t[i-1][j];
               }
           }
           }
       return t[n][x];
       
   }
   int findTargetSumWays(vector<int>&nums,int target) {
       //Your code here
       int n=nums.size();
      target = abs(target);
       int range=0;
       for(auto it:nums){
       range+=it;
       }
       int s1=(target+range)/2;
        if(range < target || (range + target) % 2 != 0)
           return 0;
       return count(nums,s1,n);
   }
};
    

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends