/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef long long ll;
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        //int max =0;
        queue<pair<TreeNode*,pair<long long,long long>>>q;
        map<int,pair<long long,long long>>m;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            auto node = temp.first;
            int x = temp.second.first;
            int y = temp.second.second;
            
            
            // int a = y-x;
            // if(a>m[y])
            // m[y] = y-x;
            if(m.find(y)==m.end()){
                m[y]={x,x};
            }
            else{
                if(m[y].first > x)
                    m[y].first = x;
                if(m[y].second <x)
                    m[y].second =x;
            }
            
            if(node->left){
                q.push({node->left,{(long long)x*2+1,y+1}});
                
            }
            if(node->right){
                q.push({node->right,{(long long)x*2+2,y+1}});
            }
        }
        
        // int max = 0;
        // for(auto i: m){
        //     if(m.second>max)
        //         max = m.second;
        // }
        long long max =0;
        for(auto i:m){
            long long a = i.second.second-i.second.first;
            //cout<<a;
            if(a>max){
                max =a;
            }
            
        }
        return max+1;
        
    }
};