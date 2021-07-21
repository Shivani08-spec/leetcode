class KthLargest {
public:
   priority_queue<int,vector<int>,greater<int>>pq;   
    int m_k;
    KthLargest(int k, vector<int>& nums) {
        
      m_k = k;

        sort(nums.begin(),nums.end());
       for(int i=0;i<k&&nums.size()>i;i++)
       {
           pq.push(nums[nums.size()-1-i]);
       }
        
        
        
        
            
      
        
    }
    
    int add(int val) {
        if(pq.size()<m_k)
        {
            pq.push(val);
        }
      else  if(pq.top()<val)
        {
            pq.pop();
            pq.push(val);
        }
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

