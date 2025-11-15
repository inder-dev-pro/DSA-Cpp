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
    int max_sum=0;
    bool validate(TreeNode* curr, long long minval, long long maxval) {
        if (curr==NULL) {return true;}
        if (curr->val<=minval || curr->val>=maxval)
            {return false;}
        return (validate(curr->left, minval, curr->val) && validate(curr->right, curr->val, maxval));   
    }
    int sum(TreeNode* node) {
        if (node==NULL) {return 0;}
        return node->val+sum(node->left)+sum(node->right);
    }
public:
    int maxSumBST(TreeNode* root) {
        if (root==NULL) {return 0;}
        if (validate(root, LLONG_MIN, LLONG_MAX)) {
            max_sum=max(max_sum, sum(root));
        }
        maxSumBST(root->left);
        maxSumBST(root->right);
        return max_sum;
    }
};