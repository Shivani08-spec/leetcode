class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums1.size(); i++) {
            seen[nums1[i]]++;
        }
        
        for (int i = 0; i < nums2.size(); i++) {
            if (seen[nums2[i]] != 0) {
                ret.push_back(nums2[i]);
                seen[nums2[i]]--;
            }
        }
        return ret;
    }
};