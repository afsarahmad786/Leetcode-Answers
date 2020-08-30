 int solve(TreeNode *root, bool &res)    {
        if(root==NULL)
            return 0;
        
        bool temp=true;
        int l=solve(root->left,res);
        int r=solve(root->right,res);
        
        if(abs(l-r)>1)
            temp=false;
        res=res&&temp;
        return 1+max(l,r);
        
        
    }
    bool isBalanced(TreeNode* root) {
        if(root== NULL)
            return true;
        
        bool res=true;
        
        solve(root,res);
        return res;
            
        
    }