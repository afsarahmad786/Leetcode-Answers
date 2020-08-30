class Solution {
public:
    TreeNode* tmp=NULL;
    
    void flatten(TreeNode* root) {
        if(root==NULL)  return;
        
        flatten(root->right);
        flatten(root->left);
  
        root->right=tmp;
        root->left=NULL;
        
        tmp=root;
    }
};