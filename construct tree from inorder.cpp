class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return nullptr;
        //preorder is DLR. inorder is LDR
        TreeNode* root = new TreeNode();
        root->val = preorder.front();
        
        auto it = find(inorder.begin(),inorder.end(),root->val);
        int i = distance(inorder.begin(),it); //also = size of left inordertree
        
        vector<int> leftinorder(inorder.begin(),inorder.begin()+i);
        vector<int> leftpreorder(preorder.begin()+1,preorder.begin()+1+i);
        TreeNode* leftchild = buildTree(leftpreorder,leftinorder);
        
        vector<int> rightinorder(inorder.begin()+i+1,inorder.end());
        vector<int> rightpreorder(preorder.begin()+i+1,preorder.end());
        TreeNode* rightchild = buildTree(rightpreorder,rightinorder);
        
        root->left = leftchild; root->right = rightchild;
        return root;
    }
};