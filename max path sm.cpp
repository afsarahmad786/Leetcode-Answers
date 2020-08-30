class Solution {
public:
    int maxPath(TreeNode* root,int &ans){
        if(root==NULL)return 0;
        int l=maxPath(root->left,ans);
        int r=maxPath(root->right,ans);
        int temp=max(root->val,root->val+max(l,r));
        ans=max(ans,max(max(l+r+root->val,root->val+max(l,r)),root->val));
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxPath(root,ans);
        return ans;
    }
};