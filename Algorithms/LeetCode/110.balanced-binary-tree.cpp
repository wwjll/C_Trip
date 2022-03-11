/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }

    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        if(left == -1 || right == -1 || abs(left - right) > 1)
        {
            return -1;
        }
        return 1 + max(left, right);
    }
};
// @lc code=end