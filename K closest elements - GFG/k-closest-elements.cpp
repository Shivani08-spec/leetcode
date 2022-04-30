// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Num{
    public:
    int num;
    int diff;
    
    Num(int num, int diff) : num(num), diff(diff) {}
};

bool operator<(const Num &n1, const Num &n2){
    if(n1.diff==n2.diff) return n1.num>n2.num;
    else return n1.diff<n2.diff;
}
class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        priority_queue<Num>maxh;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=x){
                
            maxh.push(Num(arr[i],abs(arr[i]-x)));
            if(maxh.size()>k){
                maxh.pop();
            }
            }
        }
        
        vector<int>v;
        while(!maxh.empty()){
            v.push_back(maxh.top().num);
            maxh.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends