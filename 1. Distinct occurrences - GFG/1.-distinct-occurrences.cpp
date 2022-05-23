// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
      int distict(string s, string t,int m ,int n,vector<vector<int>>dp){
   for(int i=1;i<=m;i++){
       for(int j=1;j<=n; j++){
           if(s[m-i]==t[n-j]){
               dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%(1000000000+7);
           }
           else{
               dp[i][j]=dp[i-1][j];            }
       }
   }
   return dp[m][n]%(1000000000+7);
}
   int subsequenceCount(string s, string t)
   {
     //Your code here
     int m=s.length(),n=t.length();
vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
for(int i=0;i<=n;i++){
    dp[0][i]=0;
}
for(int i=0;i<=m;i++){
    dp[i][0]=1;
}
  return distict(s,t,m,n,dp);
    
    }
};
 


// { Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}  // } Driver Code Ends