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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return{};
        
        queue<TreeNode*> q;
        vector<int> temp;
        vector<vector<int>> ans;
        
        q.push(root);
        int count=q.size();
        
        while(!q.empty())
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
                
                temp.push_back(curr->val);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};