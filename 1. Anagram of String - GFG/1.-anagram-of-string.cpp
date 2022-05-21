// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
int H1[26]={0};
int H2[26]={0};
for(int i=0;str1[i]!='\0';i++){
   H1[str1[i]-97]++;
}
for(int i=0;str2[i]!='\0';i++){
   H2[str2[i]-97]++;
}
int sum=0;
for(int i=0;i<26;i++){
   sum+=abs(H1[i]-H2[i]);
}
return sum;
}