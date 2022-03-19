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
//......Using BST Iterator method...........//
class Solution {
    stack<TreeNode*> st1,st2;
public:
    void pushAll(TreeNode* root){
        TreeNode* ptr1=root;
        TreeNode* ptr2=root;
        while(ptr1!=NULL){
            st1.push(ptr1);
            ptr1=ptr1->left;
        }
        while(ptr2!=NULL){
            st2.push(ptr2);
            ptr2=ptr2->right;
        }
    }
        
    bool findTarget(TreeNode* root, int k) {
        pushAll(root);
        while(!st1.empty() and !st2.empty()){
            if(st1.top()->val+st2.top()->val==k and st1.top()->val!=st2.top()->val)
                return true;
            if(st1.top()->val+st2.top()->val==k and st1.top()->val==st2.top()->val)
                return false;
            else if(st1.top()->val+st2.top()->val<k){
                TreeNode* pt1=st1.top();
                st1.pop();
                if(pt1->right!=NULL){
                    pt1=pt1->right;
                    while(pt1!=NULL){
                        st1.push(pt1);
                        pt1=pt1->left;
                    }
                }
            }
            else if(st1.top()->val+st2.top()->val>k){
                TreeNode* pt2=st2.top();
                st2.pop();
                if(pt2->left!=NULL){
                    pt2=pt2->left;
                    while(pt2!=NULL){
                        st2.push(pt2);
                        pt2=pt2->right;
                    }
                }
            }
        }
        return false;
    }
};