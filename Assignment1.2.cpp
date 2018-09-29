#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node *left;
    struct node *right;

};

struct node *newNode(int data)
{
    struct node *tmp = (struct node *) malloc(sizeof(struct node));
    tmp->data = data;
    tmp->left = tmp->right = NULL;
    return tmp;
}

struct node* constructTreeUtil(int pre[],int post[],int* preIndex,int l,int h,int size)
{
    if(*preIndex >=size || l>h)
        return NULL;

    struct node* root = newNode (pre[*preIndex]);
    ++ *preIndex;

    if(l==h)
        return root;

    int i;
    for(i =1;i<=h;++i)
    if(pre[*preIndex]==post[i])
        break;

    if(i<=h)
    {
        root->left = constructTreeUtil(pre,post,preIndex,l,i,size);
        root->right = constructTreeUtil(pre,post,preIndex,i+l,h,size);

    }
    return root;
}

struct node *constructTree(int pre[],int post[],int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre,post,&preIndex,0,size-1,size);
}

void inorder(struct node* root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main ()
{ 
    int pre[] = {1, 2, 4, 8, 9, 5, 3, 6, 7}; 
    int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1}; 
    int size = sizeof( pre ) / sizeof( pre[0] ); 

    struct node *root = constructTree(pre, post, size);

    printf("Inorder traversal of the constructed tree: \n"); 
    inorder(root);

    return 0; 
}