/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : vxal(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 #include<bits/stdc++.h>
class Solution {
public:
     
    
     vector<vector<int>>helper(TreeNode* root){
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
             vector<int>level;
            int levelSize=q.size();
            for(int i=0;i<levelSize;i++){
            TreeNode* curr = q.front();
            q.pop();
            level.push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
            }
            result.push_back(level);
        }
        return result;
     }
    vector<vector<int>> levelOrder(TreeNode* root) {
        return helper(root);
    }
};