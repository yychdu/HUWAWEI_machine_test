#include <stdlib.h>
#include    <stdio.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;
//先序遍历
void preorder(Node* node)
{
    if(node != NULL)
    {
        printf("%d\n",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
//中序遍历
void inorder(Node* node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%d\n",node->data);
        inorder(node->right);
    }

}
//后续遍历
void postorder(Node* node)
{
    if(node!=NULL)
    {
        postorder(node->left);
        
        postorder(node->right);
        printf("%d\n",node->data);
    }

}
int main()
{
    Node n1;
    Node n2;
    Node n3;
    Node n4;

    n1.data=5;
    n2.data=6;
    n3.data=7;
    n4.data=8;

    n1.left=&n2;
    n1.right=&n3;
    n2.left=&n4;
    n2.right=NULL;
    n3.left=NULL;
    n3.right=NULL;
    n4.left=NULL;
    n4.right=NULL;

   inorder(&n1);
}