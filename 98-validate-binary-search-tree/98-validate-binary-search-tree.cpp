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
    void InorderTrav(TreeNode* root, vector<long long int>& res)
    {
        if(root)
        {
            InorderTrav(root->left, res);
            res.push_back(root->val);
            InorderTrav(root->right, res);
        }
        return;
    }
    bool isValidBST(TreeNode* root) 
    {
        vector<long long int> inorder;
        InorderTrav(root, inorder);
        for(int i=0;i<inorder.size()-1;i++)
            if(inorder[i]>=inorder[i+1])
                return false;
        return true;
    }
};