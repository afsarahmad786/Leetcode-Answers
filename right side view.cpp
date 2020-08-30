
class Solution {
public:
  
    int max_level=-1;
  
    void helper(TreeNode*root,int level,vector<int>&ans){
       if(root==NULL){
         return;
       }
        if(level>max_level){
         ans.push_back(root->val);
          max_level=level;
        }
       helper(root->right,level+1,ans);
       helper(root->left,level+1,ans);
       return;
    }
  
    vector<int> rightSideView(TreeNode* root) {
        
         vector<int> ans;
         int level=0;
         helper(root,level,ans);
         return ans;
    }
};