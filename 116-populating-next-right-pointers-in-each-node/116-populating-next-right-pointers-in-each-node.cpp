/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL){
            return root;
        }
        queue<Node*>q;
        
        q.push(root);
        q.push(NULL);
        
        while(q.size() > 1){
            
             int n = q.size();
            
            for(int i=0;i<n-1;i++){
                Node* temp = q.front();
                q.pop();
                //cout<<temp->val<<endl;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                Node* temp1 = q.front();
             
                temp->next = temp1;
                if(q.front()==NULL){
                    q.pop();
                    q.push(NULL);
                }
                
                
            }
            // q.push(NULL);
            
            
        }
        return root;
        
    }
};