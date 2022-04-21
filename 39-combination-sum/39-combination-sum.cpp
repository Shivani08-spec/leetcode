class Solution {
public:
    
    vector<vector<int>>res;
    void helper(vector<vector<int>>&res,vector<int>ip,vector<int>op,int target){
        
        if(target == 0){
            res.push_back(op);
            return;
        }
        
        if(target<0){
            return;
        }
        if(ip.size()==0){
            return ;
        }
           vector<int>op1 = op;
           vector<int>op2 = op;
           
           
           op2.push_back(ip[0]);
        helper(res,ip,op2,target-ip[0]);
           
        
        ip.erase(ip.begin()+0);
        helper(res,ip,op1,target);
           
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>op;
        helper(res,candidates,op,target);
        
        return res;
    }
};