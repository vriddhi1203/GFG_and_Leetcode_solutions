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
//................Recursive (DFS) approach....................//
class Solution {
public:
    void rightview(TreeNode* node, vector<int> &vec, int level){
        if(node==NULL)
            return;
        if(level==vec.size())
            vec.push_back(node->val);
        rightview(node->right,vec,level+1);
        rightview(node->left,vec,level+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        TreeNode* node=root;
        rightview(node,vec,0);
        return vec;
    }
};

//.................Using Queue(BFS) approach......................//
void binaryTreeRightView(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(int i=1;i<=n;i++){
            Node* temp=q.front();
            q.pop();

            if(i==n)
                cout<<temp->data<<" ";
            if(temp->left!=NULL)
                q.push(temp);
            if(temp->right!=NULL)
                q.push(temp);
        }
    }
}
