class Solution {
public:
    struct cmp{
      bool operator() (pair<int,vector<int>>p1,pair<int,vector<int>>p2) 
      {
          return p1.first>p2.first;
      }
    };
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<vector<int>>v;
        
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,cmp>pq;
    
        for(int i =0;i<k&&i<nums1.size();i++)
        {
            for(int j =0;j<k&&j<nums2.size();j++)
            {
                vector<int>temp = {nums1[i],nums2[j]};
                int sum = nums1[i]+nums2[j];
                
                auto p=make_pair(sum,temp);
                
                pq.push(p);
                
            }
        }
        for(int i =0;i<k&&!pq.empty();i++)
        {
            v.push_back(pq.top().second);
                pq.pop();
        }

    return v;
    }
};