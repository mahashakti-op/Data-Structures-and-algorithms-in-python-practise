class Solution {
public:
    TreeNode * prev = NULL;
    bool ans = true;   //initially 

    void fun(TreeNode * root){
        if(root == NULL)
            return ;
        fun(root->left);

        if(prev==NULL)
            prev = root;
        else{
            if(root->val<=prev->val)
                ans = false;
                prev = root;
        }
        fun(root->right);
    }

    bool isValidBST(TreeNode* root) {
        fun(root);
        return ans;  
    }
};