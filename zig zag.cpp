class Solution {
private:
void bfs(queue<TreeNode*> q, vector<vector<int>>& ans, int flip){
	if(q.empty()) return;

	vector<int> level;
	queue<TreeNode*> newq;

	while(!q.empty()){
		TreeNode* curr = q.front();
		q.pop();

		if(curr->left != NULL) newq.push(curr->left);
		if(curr->right != NULL) newq.push(curr->right);
		level.push_back(curr->val);
	}

	if(flip==-1) reverse(level.begin(), level.end());
	ans.push_back(level);

	flip *= -1;
	bfs(newq, ans, flip);
}

public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
		queue<TreeNode*> q;
		vector<vector<int>> ans;
		q.push(root);
		if(root==NULL) return ans;
		bfs(q, ans, 1);
		return ans;
	}
};