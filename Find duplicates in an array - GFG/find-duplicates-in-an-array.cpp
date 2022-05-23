// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
       
    unordered_map<int,int> mp;
        sort(arr,arr+n);
       for(int i = 0; i<n; i++){
           mp[arr[i]]++;
      
           if( mp[arr[i]] == 2){
              v.push_back(arr[i]);
              
       }
     
      
   }
   if(v.empty()){
       v.push_back(-1);
   }
   return v;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends