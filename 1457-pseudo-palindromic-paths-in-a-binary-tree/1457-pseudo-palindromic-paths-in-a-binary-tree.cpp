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
    void palin(int a[10], int& res, TreeNode* root)
    {
        if(!root)
            return;
        
        a[root -> val]++;
        if(!(root -> left) and !(root -> right))
        {
            int odd = 0;
            for(int i = 1; i < 10; i++)
                if(a[i] % 2 != 0)
                    odd++;
            
            if(odd <= 1)
                res++;
        }
        
        palin(a, res, root -> left);
        palin(a, res, root -> right);
        a[root -> val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int a[10] = {0};
        int res = 0;
        palin(a, res, root);
        return res;
    }
};