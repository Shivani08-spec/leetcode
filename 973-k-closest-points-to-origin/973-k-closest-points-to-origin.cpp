class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        
        priority_queue<pair<int,pair<int,int>>>maxh;
        for(int i =0;i<points.size();i++){
            maxh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            
            if(maxh.size()>k){
                maxh.pop();
            }
            
        }
        while(!maxh.empty()){
            
            ans.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
        }
        return ans;
    }
};

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        if(points.size()==0)return ans;
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<points.size();i++)
        {
            int dist=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(pq.size()<k)
            pq.push({dist,{points[i][0],points[i][1]}});
            else
            {
                if(dist<pq.top().first)
                {
                    pq.pop();
                    pq.push({dist,{points[i][0],points[i][1]}});
                }
            }
        }
        while(!pq.empty())
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
