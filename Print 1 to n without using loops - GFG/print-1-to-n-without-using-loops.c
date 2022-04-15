// { Driver Code Starts
#include<stdio.h>

 // } Driver Code Ends
void printTillN(int N)
{
    // Write Your Code here
    if(N ==0)
    return;
    
    
    printTillN(N-1);
    printf("%d ",N);
}


// { Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        printTillN(N);
        printf("\n");
        

    }
    return 0;
}  // } Driver Code Ends