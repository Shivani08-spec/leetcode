// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    int res, rem,count=1,num =0;
    if(n>10000)
    return -1;
    while(n){
        res = n/10;
        rem = n%10;
        if(rem == 0){
            num = num+count * 5;
            
        }
        else
        {
        num = num + rem*count;
        
        
        }
        count = count * 10;
        n=n/10;
        
    }
    
    return num;
    // Your code here
    //   int res = 0;
    //   int cur = 1;
    //   while(n)
    //   {
    //       int r = n%10;
    //       n /= 10;
    //       if(!r)
    //       r = 5;
    //       res = cur*r+res;
    //       cur*=10;
          
    //   }
    //   return res;
    
}