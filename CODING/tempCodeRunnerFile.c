#include<stdio.h> 
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left,*right;
}Node;
Node *createNode(int data);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);
Node *node;
int main() {
    Node *root=NULL;
    root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);
    root->right->left=createNode(6);
    root->right->right=createNode(7);
    printf("Pre-order:");
    preorder(root);
    printf("\n");
    printf("In-order:");
    inorder(root);
    printf("\n");
    printf("Post-order:");
    postorder(root);
    printf("\n");
    return 0 ;
}
Node *createNode(int data)
{
   node=(Node *)malloc(sizeof(Node));
   node->data=data;
   node->left=node->right=NULL;
   return node;
}
void preorder(Node *root)
{
   if(root==NULL){return;}
   printf("%d,",root->data);
   preorder(root->left);
   preorder(root->right);
   
}

void inorder(Node *root)
{
    if(root==NULL){return;}
    inorder(root->left);
    printf("%d,",root->data);
    inorder(root->right);
}

void postorder(Node *root)
{
    if(root==NULL){return;}
    postorder(root->left);
    postorder(root->right);
    printf("%d,",root->data);
}