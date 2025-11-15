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
private:
    void dfs(TreeNode* node, int curr, int k, bool &t) {
        if (node==NULL) {
            t=false;
            return;}
        if (node->val+curr==k) {
            t=true;
            return;}
        dfs(node->left, node->val, k, t);
        dfs(node->right, node->val, k, t);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        bool ans;
        dfs(root, root->val, k, ans);
        return ans;
    }
};