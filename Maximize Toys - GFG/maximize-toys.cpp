// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(),arr.end());
        int sum =0;
        int count =0;
        int i=0;
         for(int i=0;i<N;i++){
            if(arr[i]<=K){
                K=K-arr[i];
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends