// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function template for C++

// points : 2-d vector containing the (x, y) points
// K : number of closest points that we need to find 
// return 2d vector containing the k points in increasing order of distance from origin

class Solution{
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        // code here
        vector<vector<int>>ans;



        int n = points.size();
        
        priority_queue<pair<int,pair<int,int>>>maxh;
        
        for(int i=0;i<n;i++){
            maxh.push({points[i][0]*points[i][0]+ points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            
            if(maxh.size()>K){
                maxh.pop();
            }
        }
        
        
       while(!maxh.empty()){
           ans.push_back({maxh.top().second.first,maxh.top().second.second});
           maxh.pop();
       }
        reverse(ans.begin(),ans.end());
         return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> p, res;
        
        for(int i = 0 ; i < n ; ++ i ) {
            vector<int> vec(2);
            cin >> vec[0] >> vec[1];
            p.push_back(vec);
        }
        Solution obj;
        res = obj.kClosest(p, k);
        
        for(int i = 0 ; i < k ; ++ i ) {
            cout << res[i][0] << " " << res[i][1] << " ";
        }
        
        cout << "\n";
        
    }
}  // } Driver Code Ends