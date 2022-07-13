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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(root==NULL)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        bool rev=false;
        q.push(root);
        while(!q.empty())
        {
            int count = q.size();
            vector<int> temp(count);
            for(int i=0;i<count;i++)
            {
                TreeNode* curr= q.front();
                q.pop();
                if(rev)
                    temp[count-i-1]=curr->val;
                else
                    temp[i]=curr->val;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }

            rev=!rev;
            ans.push_back(temp);
        }
        return ans;
    }
};