/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef pair<int,int> ppi;
class Solution {
public:
	int count=0;
	ppi f(TreeNode* root)
	{
		if(root == NULL) return {0,0};                  // base case
		ppi l = f(root->left);
		ppi r = f(root->right);
		int lsum = l.first;                             // sum of node values in left subtree
		int rsum = r.first;                             // sum of node values in right subtree
		int lcount = l.second;                          // number of nodes in left subtree
		int rcount = r.second;                          // number of nodes in right subtree

		int sum = (lsum + rsum + root->val)/(lcount+rcount+1);  // calculating average
		if(sum == root->val)count++;                           
		return {lsum+rsum+root->val,lcount+rcount+1};           
	}
	int averageOfSubtree(TreeNode* root) {
		f(root);
		return count;                                 
	}
};
