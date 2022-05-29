// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
 int dp[1001][1001];
    bool isPalindrome(string str, int i, int j)
    {
        if(i >= j) // if there is one or no character in the string
            return true;

        while(i < j)
        {
            if(str[i] != str[j]) // if character is not same
                return false;
            i++;
            j--;
        }
    }
    int solve(string str, int i, int j)
    {
        if(i >= j) return 0;
        
        if(isPalindrome(str, i, j))
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = INT_MAX;
        for(int k = i; k < j; k++)
        {
            if(isPalindrome(str, i , k))
            {
                 int temp_ans = 1 + solve(str, i, k) + solve(str, k+1, j);
                 ans = min(ans, temp_ans);
            }
        }
        
        return dp[i][j] = ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(dp, -1, sizeof(dp));
        return solve(str, 0, str.size()-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends