#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#if 0
template<typename T>
T add(T x, T y)
{
	return x + y;
}
struct student 
{
	string name;
	double score;
	void print();
};
void student::print()
{
	cout << name << " " << score << endl;
}
int main()
{
#if 0
	string str="66666" ;
	cout<<str.size()<<endl;
;
	str.insert(1, "33");
	str.insert(5, "53");
	cout << str<<endl;

	printf("hello\n");
	int a, b;
	char op;
	cin >> a >> op >> b;
	if (op == '+')
	{
		cout << a + b;

	}
	cout << add(5.5, 3.4) << endl;
	cout << add<string>("hello", "world") << endl;
#endif
	student stu;
	stu.name = "xiao";
	stu.score = 3.1;
	stu.print();

	
}
#endif
#include    <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}Node;

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
int main()
{
	Node n1;
	Node n2;
	Node n3;
	Node n4;

	n1.data = 5;
	n2.data = 6;
	n3.data = 7;
	n4.data = 8;

	n1.left = &n2;
	n1.right = &n3;
	n2.left = &n4;
	n2.right = NULL;
	n3.left = NULL;
	n3.right = NULL;
	n4.left = NULL;
	n4.right = NULL;

	postorder(&n1);
	
}
