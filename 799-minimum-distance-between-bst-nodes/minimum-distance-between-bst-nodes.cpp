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
    vector<int>inorder;
    void Inorder(TreeNode* root){
        if(!root) return;
        else{
            Inorder(root->left);
            inorder.push_back(root->val);
            Inorder(root->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        Inorder(root);
        int res=INT_MAX;
        for(auto i=1;i<inorder.size();i++){
            res=min(res,inorder[i]-inorder[i-1]);
        }
        return res;
    }
};