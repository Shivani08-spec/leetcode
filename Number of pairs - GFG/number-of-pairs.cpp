// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    int get_index(int Y[],int N, int x){
           int low = 0;
           int high = N-1;
           int ans = -1;
           
           while(low<=high){
           int mid = (low+high)/2;
           
           if(Y[mid]>x){
               high = mid-1;
               ans = mid;
           }    
               else{
                   low = mid+1;
               }
           
           }
           return ans;
       }
       
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       
       sort(Y,Y+N);
       sort(X,X+M);
      
       int zero = 0,one = 0,two =0, three=0,four=0;
       
       for(int i =0;i<N;i++){
           if(Y[i]==0){
               zero++;
           }
           if(Y[i]==1)
           one++;
           
           if(Y[i]==3)
           three++;
           
           if(Y[i]==4)
           four++;
         
         if(Y[i]==2)
           two++;
       }
       
       long count =0;
    //traversing x array
    
    for(int i =0;i<M;i++){
        if(X[i]==0)
        continue;
        
        else if(X[i]==1){
            count += zero;
            
        }
        else if(X[i]==2){
            int index = get_index(Y,N,2);
            
            if(index !=-1){
                count += N-index;
                
            }
            count -= three;
            count -= four;
            count += one +zero;
            
        }else{
            int index = get_index(Y,N,X[i]);
            
            if(index !=-1){
                count += N-index;
                
            }
            count += one+zero;
        }
        if(X[i]==3){
                    count+=two;
                }
    }
    
    return count;
       
    }
};


// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends