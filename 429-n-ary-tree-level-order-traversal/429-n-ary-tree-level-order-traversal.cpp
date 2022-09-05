/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        if(root == NULL)
            return {};
        
        vector<vector<int>> ans;
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> tmp;
            int s = q.size();
            for(int i = 0; i < s; i++)
            {
                Node* curr = q.front();
                q.pop();
                tmp.push_back(curr -> val);
                for(auto child : curr -> children)
                    q.push(child);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};