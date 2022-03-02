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

//....................USING 2 STACKS APPROACH......................//
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1,st2;
        vector<int> postorder;
        if(root==NULL){
            return postorder;
        }
        TreeNode* node=root;
        st1.push(root);
        while(!st1.empty()){
            node=st1.top();
            st2.push(node);
            st1.pop();
            if(node->left!=NULL)
                st1.push(node->left);
            if(node->right!=NULL)
                st1.push(node->right);
        }
        while(!st2.empty()){
            node=st2.top();
            postorder.push_back(node->val);
            st2.pop();
        }
        return postorder;
    }
};
