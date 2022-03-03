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