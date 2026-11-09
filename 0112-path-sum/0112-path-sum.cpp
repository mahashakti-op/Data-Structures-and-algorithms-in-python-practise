class Solution {
public:
    bool res = false;
    void fun(TreeNode* root, int sum, int target) {
        if(root == nullptr) return;

        sum += root->val;
        // Check if current node is a leaf
        if(root->left == nullptr && root->right == nullptr) {
            if(sum == target) {
                res = true;
            }
            return;
        }
        fun(root->left, sum, target);
        fun(root->right, sum, target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        res = false;
        fun(root, 0, targetSum);
        return res;
    }
};
