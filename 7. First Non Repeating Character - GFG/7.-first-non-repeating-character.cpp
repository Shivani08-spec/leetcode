// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

string find(string s);

//Your code will be place here

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int x;
	    cin >> x;
	    string s;
	    cin >> s;
	    int h[26];
	    
	    cout << find(s) << "\n";
	    
	}
	
	return 0;
}// } Driver Code Ends


//User function template for C++

// return the first non-repeating char in S.
// if there's no non-repeating char, return "-1"
string find(string S) {
    //code here
    map<char,int>mp;
    
    for(int i=0;i<S.length();i++){
        mp[S[i]]++;
    }
    string s ="";
    for(int i=0;i<S.length();i++){
        if(mp.find(S[i])->second==1){
            s+=S[i];
            break;
        }
    }
    if(s.length()==0){
        s+="-1";
    }
    return s;
    
}