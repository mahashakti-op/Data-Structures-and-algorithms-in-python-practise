class Solution {
public:
    vector<vector<int>> res;

    void fun(TreeNode* root, int sum, int target,vector<int>& tmp) {
        if(root == nullptr) return;

        sum += root->val;
        tmp.push_back(root->val);

        // Check if current node is a leaf
        if(root->left == nullptr && root->right == nullptr) {
            if(sum == target) {
                res.push_back(tmp);
            }
            tmp.pop_back();
            return;
        }
        fun(root->left, sum, target, tmp);
        fun(root->right, sum, target, tmp);
        tmp.pop_back();     //for new nodes to come and make pair
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        res.clear();
        vector<int> tmp;
        fun(root, 0, targetSum, tmp);
        return res;
    }
};
