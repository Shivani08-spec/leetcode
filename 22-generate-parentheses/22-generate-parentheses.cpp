class Solution {
public:
    vector<string>res;
    
    void make_pair(int o, int c,string op){
        if(o==0 && c==0){
            res.push_back(op);
            return;
        }
        if(o!=0){
            string op1 =op;
               op1 += '(';
            make_pair(o-1,c,op1);
        }
        if(c>o){
            string op2 =op;
            op2 += ')';
            make_pair(o,c-1,op2);
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        string op = "";
        
        
        
        make_pair(n,n,op);
        
        return res;
        
    }
};