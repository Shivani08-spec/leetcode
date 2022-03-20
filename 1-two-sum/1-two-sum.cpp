class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<pair<int,int>>v;
        vector<int>ans;
        
        for(int i =0;i<n;i++){
            v.push_back(make_pair(nums[i],i));
            
            
            
        }
        sort(v.begin(),v.end());
        
        int i =0;
        int j =n-1;
        while(i<j){
            if(v[i].first+v[j].first == target){
                ans.push_back(v[i].second);
               ans.push_back(v[j].second);
        }
            if(v[i].first+v[j].first < target){
                i++;
            }
                else 
                    j--;
                
            
                
        }
        return ans;
    }
};