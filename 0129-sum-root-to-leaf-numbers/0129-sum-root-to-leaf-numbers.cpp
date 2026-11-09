class Solution {
public:
    void fun(TreeNode* root, int sum, int &res) {
        if(root == nullptr) return;

        sum = sum * 10 + root->val;
        if(root->left == nullptr && root->right == nullptr) {
            res += sum;
            return;
        }
        fun(root->left, sum, res);
        fun(root->right, sum, res);
    }
    int sumNumbers(TreeNode* root) {
        int res = 0;
        fun(root, 0, res);
        return res;
    }
};
