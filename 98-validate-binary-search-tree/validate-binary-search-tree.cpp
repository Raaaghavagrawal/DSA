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
    void inorder(TreeNode* root, vector<int>&ino){
        if(root==nullptr) return;
        inorder(root->left,ino);
        ino.push_back(root->val);
        inorder(root->right,ino);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        if(!root->left && !root->right) return true;
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1]) return false;
        }
        return true;
    }
};