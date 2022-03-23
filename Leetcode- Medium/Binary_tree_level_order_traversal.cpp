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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qt;
        vector<vector<int>> vec;
        if(root==NULL)
            return vec;
        qt.push(root);
        while(!qt.empty()){
            int size=qt.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=qt.front();
                qt.pop();
                if(node->left!=NULL)
                    qt.push(node->left);
                if(node->right!=NULL)
                    qt.push(node->right);
                level.push_back(node->val);
            }
            vec.push_back(level);
        }
        return vec;
    }
};