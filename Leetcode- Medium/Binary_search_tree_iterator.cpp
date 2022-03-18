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
class BSTIterator {
    stack<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        TreeNode* ptr=root;
        while(ptr!=NULL){
            st.push(ptr);
            ptr=ptr->left;
        }
    }
    
    int next() {
        TreeNode* ptr1=st.top();
        st.pop();
        TreeNode* ptr2=ptr1;
        if(ptr2->right!=NULL){
            ptr2=ptr2->right;
            while(ptr2!=NULL){
                st.push(ptr2);
                ptr2=ptr2->left;
            }
        }
        return ptr1->val;
    }
    
    bool hasNext() {
        if(!st.empty())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */