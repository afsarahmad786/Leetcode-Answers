class Solution {
public:
    bool lowestCommonAncestorHelper(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode** n) {        
        bool l = false;
        bool r = false;
        if (root->left != NULL) {
            l = lowestCommonAncestorHelper(root->left, p, q, n);                
        }
        if (root->right != NULL) {
            r = lowestCommonAncestorHelper(root->right, p, q, n);            
        }
        
        if ((l || r) && (root == p || root == q)) {            
            *n = root;
            return true;
        } else if (l && r && *n == NULL) {
            *n = root;
            return true;
        } else if (root == p || root == q || l || r) {
            return true;
        }
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || p == NULL || q == NULL) return NULL;
        
        TreeNode* r = NULL;
        lowestCommonAncestorHelper(root, p, q, &r);
        
        return r;
    }
};