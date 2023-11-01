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
class Solution {
public:

    void dfs(TreeNode*root, map<int,int>&mp){
        if(root==NULL){
            return;
        }
        else{
            mp[root->val]++;
            dfs(root->left,mp);
            dfs(root->right,mp);
        }
    }

    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int,int>mp;
        dfs(root,mp);
        int mx=INT_MIN;
        for(auto it:mp){
            if(it.second>mx){
                mx=it.second;
            }
        }
        for(auto it:mp){
            if(it.second==mx){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};