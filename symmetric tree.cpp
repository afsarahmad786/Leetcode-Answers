void preorder1(TreeNode* root,vector <int> &v,int d)
    {
        if(root==NULL)
            return ;
        v.push_back(root->val+d);
        preorder1(root->left,v,d+1);
        preorder1(root->right,v,d-1);
    }
     void preorder2(TreeNode* root,vector <int> &v,int d)
    {
        if(root==NULL)
            return ;
        v.push_back(root->val+d);
        preorder2(root->right,v,d+1);
         preorder2(root->left,v,d-1);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return 1;
        vector <int> v1,v2;
        int d=1;
        preorder1(root->left,v1,d);
        preorder2(root->right,v2,d);
        if(v1==v2)
            return 1;
        return 0;
    }