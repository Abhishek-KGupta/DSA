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
        stack<int>s;
        queue<TreeNode*> q;
        bool rev=false;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int count = q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* curr= q.front();
                q.pop();
                if(rev)
                    s.push(curr->val);
                else
                    temp.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(rev)
            {
                while(!s.empty())
                {
                    temp.push_back(s.top());
                    s.pop();
                }
            }
            rev=!rev;
            ans.push_back(temp);
        }
        return ans;
    }
};