class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> permutation;

        sort(nums.begin(),nums.end());

do {
// process permutation
    permutation.push_back(nums);

} while (next_permutation(nums.begin(),nums.end()));
        return permutation;
        
    }
};