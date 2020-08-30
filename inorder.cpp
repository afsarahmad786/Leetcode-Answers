class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> v;
        TreeNode* p;
         TreeNode* x;

        stack<TreeNode*> stk;
        p=root;
        while(!stk.empty()||p!=nullptr){
           
            if(p){
               stk.push(p);
                p=p->left;
                
            }
            else{
               p= stk.top();
               stk.pop(); 
               v.push_back(p->val); 
               p=p->right;
            }
            
        }
        return v;
    }
};