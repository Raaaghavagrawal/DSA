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
int ans = 0;

    // Returns: {sum of subtree, {min, max}}
    pair<int, pair<int, int>> solve(TreeNode* root)
    {
        if (root == NULL)
            return {0, {INT_MAX, INT_MIN}};  // Empty subtree is BST with sum 0

        auto left = solve(root->left);
        auto right = solve(root->right);

        int leftSum = left.first;
        int rightSum = right.first;

        int leftMin = left.second.first;
        int leftMax = left.second.second;

        int rightMin = right.second.first;
        int rightMax = right.second.second;

        // Check if this subtree is BST
        if (root->val > leftMax && root->val < rightMin)
        {
            int currSum = leftSum + rightSum + root->val;
            ans = max(ans, currSum);
            return {
                currSum,
                {min(root->val, leftMin), max(root->val, rightMax)}
            };
        }

        // Not BST: return dummy invalid range and don't use this sum
        return {0, {INT_MIN, INT_MAX}};
    }

public:
    int maxSumBST(TreeNode* root) {
        ans = 0;
        solve(root);
        return ans;
    }
};