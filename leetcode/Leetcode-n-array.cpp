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
    vector<int> nums;
    vector<int> preorder(Node* root) {
        if(root == NULL) return {};
        nums.push_back(root->val);
        preorder(root->children);
        // preorder(root->right);
        return nums;
    }
};