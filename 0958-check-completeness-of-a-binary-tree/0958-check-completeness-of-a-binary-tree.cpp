class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root == nullptr) return true;

        bool nullFound = false;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode* t = q.front();
            q.pop();
            if(t == nullptr) {
                nullFound = true;
            }
            else {
                if(nullFound) return false;

                q.push(t->left);
                q.push(t->right);
            }
        }
        return true;
    }
};
