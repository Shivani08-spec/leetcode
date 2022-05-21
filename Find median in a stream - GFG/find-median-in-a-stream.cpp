// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
     priority_queue<double> maxHeap;
    priority_queue<double , vector<double>, greater<double> > minHeap; 
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(maxHeap.size() == minHeap.size()){
            
            if(maxHeap.size() == 0){
                maxHeap.push(x);
                return ;
            }
            
            if(x < maxHeap.top()){             // if size of x is less maxHEap than push in maxheap  else push in minheap
                maxHeap.push(x);
            }
            else{
                minHeap.push(x);
            }
        }
        else {
            
            // Case 2: If size is differernt
            
            // 1-> if size of maxHEap > minHeap 
            if(maxHeap.size() > minHeap.size()){
                
                if(x < maxHeap.top()){
                    
                    int temp = maxHeap.top();
                    maxHeap.pop();
                    maxHeap.push(x);
                    minHeap.push(temp);
                    
                } else {
                    minHeap.push(x);
                }
                
            }
            else{   // 2 -> if size of minHeap > maxHeap
                
                if(x > minHeap.top()){
                    
                    int temp = minHeap.top();
                    minHeap.pop();
                    minHeap.push(x);
                    maxHeap.push(temp);
                    
                } else{
                    maxHeap.push(x);
                }
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        return ;
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxHeap.size() > minHeap.size()){
            return maxHeap.top();
        }
        else if(minHeap.size() > maxHeap.size()){
            return minHeap.top();
        }
        else{
            return (maxHeap.top() + minHeap.top())/2;
        }
    }
};



// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends