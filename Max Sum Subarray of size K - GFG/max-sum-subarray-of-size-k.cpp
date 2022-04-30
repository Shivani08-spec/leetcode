// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
   
    int maximumSumSubarray(int k, vector<int> &nums , int n){
        // code here
        int i(0), j(0), mx = 0, sum = 0;
        
        while(j < n){
            // first calculation to add the effect of the second pointer
            sum += nums[j];
            
            if(j - i + 1 == k){
                mx = max(mx, sum);
                
                // calculation to remove the effect of the first pointer
                sum -= nums[i];
                i++;
            }
            
            j++;
        }
        
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends