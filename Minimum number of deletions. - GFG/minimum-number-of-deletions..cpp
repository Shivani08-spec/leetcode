// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

int lcs(string a, string b, int m,int n){
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
            else if(a[i-1]==b[j-1]){
                t[i][j]= t[i-1][j-1]+1;
            }
            else{
                t[i][j]= max(t[i-1][j],t[i][j-1]);
            }
            
        }
    }
    return t[m][n];
}
int minDeletions(string str, int n) { 
    //complete the function here 
    string b =str;
    reverse(b.begin(),b.end());
    int a = lcs(str,b,n,n);
    
    return n-a;
    
} 