// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        unordered_map<int,string> m;
        m[1]="I";
        m[4]="IV";
        m[9]="IX";
        m[5]="V";
        m[10]="X";
        m[40]="XL";
        m[50]="L";
        m[90]="XC";
        m[100]="C";
        m[400]="CD";
        m[500]="D";
        m[900]="CM";
        m[1000]="M";
        int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans;
        for(int i=0;i<13;i++){
        if(a[i]<=n)
        {
            ans+=m[a[i]];
            n-=a[i];
            i--;
        }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}  // } Driver Code Ends