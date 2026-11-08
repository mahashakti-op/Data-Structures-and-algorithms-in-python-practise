class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int k) {

        if(root == nullptr) return nullptr;

        if(root -> val == k) {
            return root;
        }

        if(root->val > k) {
            return searchBST(root->left, k);
        }
        else {
            return searchBST(root->right, k);
        }
    }
};
