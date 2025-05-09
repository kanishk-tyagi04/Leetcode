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
    TreeNode* searchBST(TreeNode* root, int key) {
        if(root==nullptr){
            return nullptr;
        }
        if(root->val==key){
            return root;
        }
        if(root->val==key){
            return root;
        }
        else if(root->val>key){
            return searchBST(root->left,key);
        }
        else{
            return searchBST(root->right,key);
        }
    }
};