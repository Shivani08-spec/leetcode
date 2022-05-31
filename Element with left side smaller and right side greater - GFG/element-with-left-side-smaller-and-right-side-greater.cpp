// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    vector<int> left(n),right(n);
    for(int i=0,maxi=INT_MIN,j=n-1,mini=INT_MAX;i<n;i++,j--){
        maxi=max(maxi,arr[i]);
        left[i]=maxi;
        mini=min(mini,arr[j]);
        right[j]=mini;
    }
    for(int i=1;i<n-1;i++){
        if(left[i]<=arr[i] and right[i]>=arr[i]) return arr[i];
    }
    return -1;
}