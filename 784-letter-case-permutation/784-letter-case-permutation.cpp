class Solution {
public:
    
    void helper(vector<string>&ans,string ip,string op){
        
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        
        string op1 = op;
        string op2 = op;
        
        if(isalpha(ip[0])){
            op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
            ip.erase(ip.begin()+0);
             helper(ans,ip,op1);
             helper(ans,ip,op2);
            
        }
        else{
            op.push_back(ip[0]);
           ip.erase(ip.begin()+0);
             helper(ans,ip,op);
            
        }
       
    }
    vector<string> letterCasePermutation(string s) {
        
        vector<string>ans;
        string op ="";
        
        helper(ans,s,op);
        return ans;
    }
};