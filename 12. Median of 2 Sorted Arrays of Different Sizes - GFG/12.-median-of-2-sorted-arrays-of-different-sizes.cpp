// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int> arr;
        for(int i=0;i<array1.size();i++)
        {
            arr.push_back(array1[i]);
        }
        for(int i=0;i<array2.size();i++)
        {
            arr.push_back(array2[i]);
        }
        sort(arr.begin(),arr.end());
        if(arr.size()%2==0)
        {
            return ((double)arr[arr.size()/2] + (double)arr[(arr.size()/2)-1])/2;
        }
        return arr[(arr.size()/2)];
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends