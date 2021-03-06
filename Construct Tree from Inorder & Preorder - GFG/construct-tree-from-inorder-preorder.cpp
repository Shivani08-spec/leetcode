// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int search(int in[],int start,int end, int curr){
        for(int i=start;i<=end;i++){
            if(in[i]==curr){
                return i;
            }
        }
        return -1;
    }
    int idx =0;
    Node* helper(int in[],int pre[],int start, int end){
        if(start>end){
            return NULL;
        }
        int curr = pre[idx];
        idx++;
        
        Node* root = new Node(curr);
        if(start== end){
            return root;}
        int pos = search(in,start,end, curr);
        root->left = helper(in,pre,start,pos-1);
        root->right= helper(in,pre,pos+1,end);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return helper(in,pre,0,n-1);
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends