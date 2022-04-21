// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    vector<vector<int>>ans;
    
    void subs( vector<vector<int>>&ans,vector<int>ip,vector<int>&op){
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        
        vector<int>op1 = op;
        vector<int>op2 = op;
        
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        
        subs(ans,ip,op1);
        subs(ans,ip,op2);
    
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        
         vector<int>op;
         
         subs(ans,A,op);
         sort(ans.begin(),ans.end());
         return ans;
         
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends