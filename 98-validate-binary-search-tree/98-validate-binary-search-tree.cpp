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
class Solution 
{
public:
    // void InorderTrav(TreeNode* root, vector<long long int>& res)
    // {
    //     if(root)
    //     {
    //         InorderTrav(root->left, res);
    //         res.push_back(root->val);
    //         InorderTrav(root->right, res);
    //     }
    //     return;
    // }
    long int prev=LONG_MIN;
    bool isValidBST(TreeNode* root) 
    {
       if(!root)
           return true;
        if(isValidBST(root->left)==false)
            return false;
        if(root->val<=prev)
            return false;
        prev=root->val;
        return isValidBST(root->right);
    }
};