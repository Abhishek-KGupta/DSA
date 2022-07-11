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
    void rightView(TreeNode *root, int level, int &maxlevel, vector<int> &res)
    {
        if(root==NULL)
            return;
        if(level>maxlevel)
        {
            res.push_back(root->val);
            maxlevel=level;
        }
        rightView(root->right, level+1, maxlevel, res);
        rightView(root->left, level+1, maxlevel, res);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> res;
        int maxlevel=0;
        rightView(root, 1, maxlevel, res);
        return res;
    }
};