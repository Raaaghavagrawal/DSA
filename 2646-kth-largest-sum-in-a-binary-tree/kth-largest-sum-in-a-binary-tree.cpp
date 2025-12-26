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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>lvlsum;
        while(!q.empty()){
            long long sum=0;
            queue<TreeNode*>q2;
            while(!q.empty()){
                auto cur=q.front();
                q.pop();
                sum+=cur->val;
                if(cur->left != nullptr) q2.push(cur->left);
                if(cur->right != nullptr) q2.push(cur->right);
            }
            lvlsum.push_back(sum);
            q=q2;
        }
        sort(lvlsum.begin(),lvlsum.end(),greater<long long>());
        if(lvlsum.size()<k) return -1;
        return lvlsum[k-1];
    }
};