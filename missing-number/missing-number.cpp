class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nsum = 0;
        for(int i=0;i<nums.size();i++)
        {
            nsum= nsum+nums[i];
        }
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int ans = sum-nsum;
        
        return ans;
        
    }
};