#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    unordered_map<int, int>mp;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        int num;
	        cin>>num;
	        mp[num]++;
	        arr[i] = num;
	    }
	    sort(arr, arr + n, [&mp](int a, int b){
	        return mp[a] > mp[b] || (mp[a] == mp[b] && a < b);
	    });
	    for(int i = 0; i < n; i++){
	        cout<<arr[i]<<' ';
	    }
	    cout<<'\n';
	    
	}
	
	return 0;
}