#include <stdlib.h>
#include    <stdio.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;

typedef struct 
{
    Node* root;
}Tree;
//先序遍历
void preorder(Node* node)
{
    if (node != NULL)
    {
        printf("%d\n", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
//中序遍历
void inorder(Node* node)
{
    if (node != NULL)
    {
        inorder(node->left);
        printf("%d\n", node->data);
        inorder(node->right);
    }

}
//后续遍历
void postorder(Node* node)
{
    if (node != NULL)
    {
        postorder(node->left);

        postorder(node->right);
        printf("%d\n", node->data);
    }

}
void insert(Tree* tree,int value)
{
    Node* node =(Node *)malloc(sizeof(Node));
    node->data = value;
    node->left =NULL;
    node->right =NULL;
    if(tree->root==NULL)
    {
        tree->root =node;
    }
    else 
    {
        Node* temp=tree->root;
        while (temp !=NULL)
        {
            if(value<temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=node;
                    return;
                }
                else 
                {
                    temp=temp->left;
                }
            }
            else
            {
                
                if(temp->right==NULL)
                {
                    temp->right=node;
                    return ;
                }
                else 
                {
                    temp=temp->right;
                }

            }
            
        }
    }
}

int get_height(Node* node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        int left_h=get_height(node->left);
        int right_h=get_height(node->right);
        int max=left_h;
        if(right_h>max)
        {
            max=right_h;
        }
        return max+1;
    } 
}

int get_maximum(Node* node)
{
    if(node==NULL)
    {
        return -1;
    }
    else
    {
        int m1=get_maximum(node->left);
        int m2=get_maximum(node->right);
        int m3=node->data;
        int max=m1;
        if(m2>max)
        {
            max=m2;
        }
        if(m3>max)
        {
            max=m3;
        }
        return max;
    }
    
}



int main()
{
    int arr[7]={6,3,8,2,5,1,7};
    Tree tree;
    tree.root=NULL;
    int i;
    for(i=0;i<7;i++)
    {
        insert(&tree,arr[i]);
    }
    int h=get_height(tree.root);
    printf("%d\n",h);
    int m=get_maximum(tree.root);
    printf("max=%d\n",m);

}




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
