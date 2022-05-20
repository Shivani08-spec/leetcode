// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool check(vector<int>adj[],vector<int>&visited,vector<int>&cdfs,int src ){
        visited[src]=1;
        cdfs[src]=1;
        for(auto x : adj[src]){
         if(visited[x]==0){
             if(check(adj,visited,cdfs,x)) return 1;
         }   else if(cdfs[x])
         return 1;
        }
        cdfs[src]=0;
        return 0;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>visited(V,0);
        vector<int>cdfs(V,0);
        
        for(int i=0;i<V;i++){
            if(visited[i]== false){
             if(check(adj,visited,cdfs,i)){
                 return true;
               }   
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends