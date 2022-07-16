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
    bool check(TreeNode* Left, TreeNode* Right)
    {
        if(Left==NULL and Right==NULL)
            return true;
        else if(Left==NULL or Right==NULL)
            return false;
        if(Left->val != Right->val)
            return false;
        return check(Left->left, Right->right) and check(Left->right, Right->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        
        return check(root->left, root->right);
    }
};