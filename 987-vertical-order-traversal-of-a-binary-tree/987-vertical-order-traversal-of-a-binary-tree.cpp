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
    void vTrav(TreeNode* root, vector<vector<int>>& ans)
    {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        
        q.push({root, {0, 0}});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            TreeNode* curr = p.first;
            int dist = p.second.first;
            int depth = p.second.second;
            
            mp[dist][depth].insert(curr->val);
            
            if(curr -> left)
                q.push({curr -> left, {dist - 1, depth + 1}});
            if(curr -> right)
                q.push({curr -> right, {dist + 1, depth + 1}});
        }
        
        for(auto it : mp)
        {
            vector<int> temp;
            for(auto x : it.second)
                temp.insert(temp.end(), x.second.begin(), x.second.end());
            ans.push_back(temp);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>> ans;
        vTrav(root, ans);
        return ans;
    }
};