// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     vector<vector<int>> ans;
    set<vector<int> > s;
    vector<int> vec;
    void solve(vector<int> arr,int i,int n)
    {
        if(i==n)
        {
            s.insert(vec);
            return ;
        }
        
        vec.push_back(arr[i]);
        solve(arr,i+1,n);
        vec.pop_back();
        solve(arr,i+1,n);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        
       
        sort(arr.begin(),arr.end()); 
      
        solve(arr,0,n);
        for(auto x :s)
        {
         ans.push_back(x);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends