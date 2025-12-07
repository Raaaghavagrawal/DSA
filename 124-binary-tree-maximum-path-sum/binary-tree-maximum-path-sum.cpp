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
    int maxSum=INT_MIN;
    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxSum;
    }
    int helper(TreeNode* root){
        if(!root) return 0;
        int l=max(helper(root->left),0);
        int r=max(helper(root->right),0);
        int res=root->val+l+r;
        maxSum=max(maxSum,res);
        return root->val+max(l,r);
    }
};