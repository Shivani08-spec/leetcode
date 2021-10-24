class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>up;
        
        for(int i =0;i<strs.size();i++){
            string a = strs[i];
            
            sort(a.begin(),a.end());
            up[a].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto i: up){
            ans.push_back(i.second);
        }
        return ans;
    }
};