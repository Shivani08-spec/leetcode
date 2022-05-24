// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             set<int> s1,s2,s3;
           vector<int> v;
          for(int i=0;i<n1;i++)
          {
              s1.insert(A[i]);
          }
           for(int i=0;i<n2;i++)
          {
              s2.insert(B[i]);
          }
           for(int i=0;i<n3;i++)
          {
              s3.insert(C[i]);
          }
          //for(int i=0;i<s1.size();i++)
           for(auto x = s1.begin(); x != s1.end(); x++)
          {
              if((s1.find(*x)!=s1.end())&&(s2.find(*x)!=s2.end())&&(s3.find(*x)!=s3.end()))
              v.push_back(*x);
          }
          return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends