// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        map<int,int>mp;
        int sum =0;
        int count =0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
            sum += 1;
            
            else
            sum -= 1;
            
            // if(sum==0){
            //     count++;
            // }
            // else if(mp.find(sum)!=mp.end()){
            //     count++;
            // }
            // else{
            //     mp[sum]=i;
                
            // }
            
            count+= mp[sum];
            mp[sum]+=1;
            
            
        }
        return count;
    }
};





// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
  // } Driver Code Ends