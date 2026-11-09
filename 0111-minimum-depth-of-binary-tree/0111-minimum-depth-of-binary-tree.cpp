class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if(root == nullptr) return 0;
        int l = minDepth(root -> left);
        int r = minDepth(root -> right);

        if(root -> left == nullptr){
            return 1+r;
        }
        if(root -> right == nullptr){
            return 1+l;
        }

        return 1 + min(l,r);        
    }
};