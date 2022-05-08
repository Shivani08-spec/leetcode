// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0;
        while(i<n&& j<m){
            if(k==1){
                return min(arr1[i],arr2[j]);
            }
            if(arr1[i]<arr2[j]){
                i++;
                k--;
            }
            else{
                j++;
                k--;
            }
            
            
        }
        
        while(i<n&&k>1){
            i++;
            k--;
        
        }
        if(i<n)
        return arr1[i];
        
        while(j<m&&k>1){
            j++;
            k--;
        
        }
        if(j<m)
        return arr2[j];
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends