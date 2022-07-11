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
    using ll = long long int;
public:
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root ==NULL)
            return 0;
        ll ans=0;
        queue<pair<TreeNode*,ll>> q;
        q.push({root,0});
        while(!q.empty())
        {
            ll count=q.size();
            ll m=q.front().second;
            ll first,last;
            for(int i=0;i<count;i++)
            {
                ll curr_id=q.front().second-m;
                TreeNode* curr=q.front().first;
                q.pop();
                if(i==0)
                    first=curr_id;
                if(i==count-1)
                    last=curr_id;
                if(curr->left)
                    q.push({curr->left,curr_id*2+1});
                if(curr->right)
                    q.push({curr->right,curr_id*2+2});
            }
            ans=max(ans, last-first+1);
        }
        return ans;
    }
};