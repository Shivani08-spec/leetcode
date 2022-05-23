// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
         int len[3]; 
        
        len[0]=x;
        len[1]=y;
        len[2]=z;
        //sort(len,len+3);
        
        int dp[4][n+1];
        for(int i=0;i<=3;i++){
            for(int j=0;j<=n;j++){
                if(i==0)
                dp[i][j] = INT_MIN;
                
                if(j==0)
                dp[i][j]=0;
            }
        }
                
                for(int i=1;i<=3;i++){
            for(int j=1;j<=n;j++){
              if(len[i-1]<=j)
                    {
                        dp[i][j]=max(1+dp[i][j-len[i-1]],dp[i-1][j]);
                    }
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                
            }
             
        }
        if(dp[3][n]<0)
       {
           return 0;
       }
        return dp[3][n];
    }
};

// { Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}  // } Driver Code Ends