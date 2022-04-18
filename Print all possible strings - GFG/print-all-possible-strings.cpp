// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}
// } Driver Code Ends


/*You have to complete this function*/
void helper(string ip, string op, vector<string>&res){
    
    if(ip.length()==0){
        res.push_back(op);
        return;
    }
    
    string op1 = op;
    string op2 = op;
    
    
    op1.push_back(' ');
    op1.push_back(ip[0]);
    
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    helper(ip,op1,res);
    helper(ip,op2,res);
}

vector<string>  spaceString(char str[])
{
//Your code here
      string op ="";
      vector<string>res;
      string ip = str;
      
      op.push_back(ip[0]);
      ip.erase(ip.begin()+0);
      
      helper(ip,op,res);
      reverse(res.begin(),res.end());
      
      
return res;

}