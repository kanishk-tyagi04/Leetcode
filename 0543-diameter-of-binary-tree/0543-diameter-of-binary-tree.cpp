class Solution {
public:
    int diameter;

    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;

        int l = maxDepth(root->left);
        int r = maxDepth(root->right);

        diameter = max(diameter, l + r);

        return 1 + max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;
        maxDepth(root);
        return diameter;
    }
};
