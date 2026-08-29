class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // Dono empty hain
        if (p == NULL && q == NULL)
            return true;

        // Ek empty hai, doosra nahi
        if (p == NULL || q == NULL)
            return false;

        // Values different hain
        if (p->val != q->val)
            return false;

        // Left aur right dono subtree same hone chahiye
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};