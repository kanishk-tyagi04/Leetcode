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
    vector<int>result;
    vector<int> helper(TreeNode* root){
        if (!root) return result;
        result.push_back(root->val);
        helper(root->left);
        helper(root->right);
        return result;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        return helper(root);
    }
};