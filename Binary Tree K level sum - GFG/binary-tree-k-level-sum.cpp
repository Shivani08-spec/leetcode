// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:

    int kLevelSum(int K, string S) {
        // code here
       int level = -1;
        int res = 0;
                
        for(int i = 0; i < S.size(); i++)
        {
            if(isdigit(S[i]))
            {
                if(level == K)
                {
                    int num = 0;
                    
                    while(i < S.size())
                    {
                        if(S[i] == ')' or S[i] == '(')
                        {
                            i--;
                            
                            break;
                        }
                        
                        num = num * 10 + (S[i] - '0');
                        
                        i++;
                    }
                    
                    res += num;
                }
            }
            else
            {
                if(S[i] == '(')
                {
                    level++;
                }
                else if(S[i] == ')')
                {
                    level--;
                }
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>K;
        cin>>S;

        Solution ob;
        cout << ob.kLevelSum(K,S) << endl;
    }
    return 0;
}  // } Driver Code Ends