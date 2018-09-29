#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left ,*right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};


void postorder(struct Node* node)
{
    if(node == NULL)
        return ;
        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
}


void preorder(struct Node* node)
{
    if(node==NULL)
    return ;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);

}


int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    root->right->right = new Node(8);

    cout<<"preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
}