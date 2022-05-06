// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long int numberOfPaths(int m, int n){
        // code here
        long long dp[m][n];
        long long mod = 1e9+7;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0|| j==0){
                    dp[i][j]=1;
                }
                
                else dp[i][j] =( dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
                
            }
        }
        
        
        return dp[m-1][n-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends