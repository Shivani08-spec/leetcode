// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string str1 = str;
		   // reverse(str1.begin(),str1.end());
		     int N = str.size();
		    int t[N+1][N+1];
		    
		     for(int i=0;i<=N;i++)
            {
               for(int j=0;j<=N;j++){
                   if(i==0 ||j==0){
                       t[i][j]=0;
                   }
                    
                    
                  else if(str[i-1]==str1[j-1] && i!=j){
                        t[i][j]= t[i-1][j-1]+1;
                    }
                    else{
                        t[i][j]= max(t[i-1][j],t[i][j-1]);
                    }
    }
}

return t[N][N];

}


};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends