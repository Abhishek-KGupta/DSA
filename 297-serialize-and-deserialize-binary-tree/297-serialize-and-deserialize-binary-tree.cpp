/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    
    
    TreeNode* buildTree(istringstream& cont)
    {
        string val;
        
        cont>>val;
        
        if(val=="null")
            return  NULL;
        
        TreeNode* node=new TreeNode(stoi(val));
        node->left= buildTree(cont);
        node->right= buildTree(cont);
        
        return node;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) 
    {
        return (root==NULL)?" null":" "+to_string(root->val)+ serialize(root->left)+ serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data)
    {
        istringstream cont(data);
        return buildTree(cont);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));