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
    void vTrav(TreeNode *root, vector<vector<int>>& ans)
    {
        map<int, map <int, multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int, int>>> q;
        
        q.push({root, {0, 0}});
        while(!q.empty())
        {
            auto p=q.front();    // p contains node and distance pair 
            int dist=p.second.first;
            int depth=p.second.second;
            TreeNode* curr=p.first;
            mp[dist][depth].insert(curr->val);
            q.pop();
            
            if(curr->left)
                q.push({curr->left, {dist-1, depth+1}});
            if(curr->right)
                q.push({curr->right, {dist+1, depth+1}});
        }
        
        for(auto it : mp)
        {
            vector<int>v;     
            for(auto at : it.second)
                v.insert(v.end(),at.second.begin(),at.second.end());
            ans.push_back(v);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>> ans;
        vTrav(root, ans);
        return ans;
    }
};