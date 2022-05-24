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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*>q;
        stack<int>s;
        bool lefttoright = true;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
             vector<int>v; 
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                if(lefttoright){
                    v.push_back(temp->val);
                }
                else{
                    s.push(temp->val); 
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right)
                    q.push(temp->right);
            }
            lefttoright = !lefttoright;
            while(s.size() != 0){
                v.push_back(s.top());
                s.pop();
                
                
            }
            ans.push_back(v);
            
            
        }
        return ans;
    }
};