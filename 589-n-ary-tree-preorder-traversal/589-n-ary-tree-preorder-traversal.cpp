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
    
    void pre(vector<int>& res, Node* root)
    {
        if(root)
        {
            res.push_back(root -> val);
            for(auto x : root -> children)
                pre(res, x);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        pre(res, root);
        return res;
    }
};