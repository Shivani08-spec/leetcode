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
    int h =0;
    vector<vector<int>>v;
    
    queue<TreeNode*>q;
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int>v1;
        if(root == NULL){
            return v;
        }
        q.push(root);
        q.push(NULL);
        bool just_seen_a_null = false;
        
        while(!q.empty()){
            
            TreeNode* temp = q.front();
              q.pop();
            if(temp != NULL){
                just_seen_a_null = false;
                v1.push_back(temp->val);
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            else if(!just_seen_a_null){
                just_seen_a_null = true;
                q.push(NULL);
                
                vector<int>tmp_v = v1;
                
                v1.clear();
                //v.insert(h,v1);
                v.push_back(tmp_v);
                h++;
            }
            else if(just_seen_a_null){
                break;
            }
        }
        return v;
        
        
    }
};