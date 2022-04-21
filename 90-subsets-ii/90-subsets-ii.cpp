class Solution {
public:
    
    vector<vector<int>>res;
    
    void subs(vector<int>ip,vector<int>op,vector<vector<int>>&res){
        if(ip.size()==0){
            res.push_back(op);
            return;
        }
        
        
        vector<int>op1 = op;
        vector<int>op2 = op;
        
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        
        
        subs(ip,op1,res);
        subs(ip,op2,res);
        
        
        
        
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int>op;
        sort(nums.begin(),nums.end());
        
        subs(nums,op,res);
        
        sort(res.begin(),res.end());
            
            set<vector<int>> s;
            for(auto it : res){
                s.insert(it);
            }
          res.clear();
        for(auto it: s){
            res.push_back(it);
        }
        
           
        
        return res;
        
        
    }
};