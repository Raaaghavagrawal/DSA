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
    int ans=0;
    void sum(TreeNode* root){
        if(root==nullptr) return;
        if(root->left){
            if(root->left->left == nullptr && root->left->right==nullptr) ans+=root->left->val;
        }
        sum(root->left);
        sum(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
       sum(root);
       return ans;
    }
};