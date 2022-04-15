// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    vector<int>v;
    void res(vector<int>arr,int l,int r,int sum=0){
        if(l>r){
        v.push_back(sum);
        return;
        }
        
        res(arr,l+1,r,sum+arr[l]);
       
        res(arr,l+1,r,sum);
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int l =0;
        int r = N-1;
        int sum =0;
        
        res(arr,0,N-1,0);
        
        return v;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends