#include <stdio.h>
#include <stdlib.h>
//结点的结构
typedef struct Node
{
    int data;
    struct Node *link;
}node;
//创建一个头结点
node * create_list(int x)
{
    node *p = (node *)malloc(sizeof(node));
    p->data = x;
    p->link = NULL;
    return p;
}
//向链表中添加数据
void add_list(node * head,int x)
{
    if(!head)return;
    while(head->link)
        head = head->link;
    node *p = (node *)malloc(sizeof(node));
    p->data = x;
    p->link = NULL;
    head->link = p;
}
//在链表中查找数据
node * find_list(node * head,int x)
{
    while(head && head->data != x)
        head = head->link;
    if(head) return head;
    return NULL;
}
//打印链表中的数据
void show_list(node * head)
{
    while(head)
    {
        printf("%d->",head->data);
        head = head->link;
    }
    printf("null\n");
}
//反转链表
node * reverse(node * head)
{
    node * new = NULL,*old = head,*temp;
    while(old)
    {    
        temp = old->link;
        old->link = new;
        new = old;old = temp;
    }
    return new;
}
//删除链表头节点
node * del_list(node * head)
{
    if(!(head))return NULL;
    node *p = (head);
    (head) = (head)->link;
    free(p);
    return head;
}
//删除链表,需要修改head的指向，所以使用二级指针
void del_list_all(node **head)
{
    while((*head))
        (*head) = del_list((*head));
}
//测试程序
int main()
{
    node *ptr = create_list(1);
    add_list(ptr,2);
    add_list(ptr,3);
    add_list(ptr,4);
    show_list(ptr);
    if(find_list(ptr,5)) printf("查找到3的节点\n");
    else printf("未找到3的节点\n");
    if((ptr = del_list(ptr)) == NULL) printf("该链表为空链表，不可删除\n");
    show_list(ptr);
    del_list_all(&ptr);
    show_list(ptr);
    return 0;
}