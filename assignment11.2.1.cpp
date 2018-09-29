#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left ;
    struct Node *right;
    int height;
}

int max(int a, int b)
{
    return a>b?a:b;
}

int height(struct Node *N)
{
    if(N==NULL)
        return 0;
    return N->height;
}

struct Node * newNode(int key)
{
    struct Node* node  = (struct Node*)malloc(sizeof(struct Node));
    node->key =key;
    node->right = NULL;
    node->left = NULL;
    node->height = 1;
    return node;
}

struct Node *rr(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *t2 = x->right;

    x->right =y;
    y->left = t2;

    y->height = max(height(y->left),height(y->right))+1;
    x->height = max(height(x->left),height(x->right))+1;
    return x;
}

struct Node *lr(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *t2 = y->left;

    y->left =x;
    x->right = t2;

    y->height = max(height(x->left),height(x->right))+1;
    y->height = max(height(y->left),height(y->right))+1;

    return y;

}