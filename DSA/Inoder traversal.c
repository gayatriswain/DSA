#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int info;
	struct Node *left, *right;
};

struct Node *New(int data)
{
	struct Node *node=(struct Node*)malloc(sizeof(struct Node));
	node->info=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}

void Inorder(struct Node *node)
{
	if(node==NULL)
	return;
	Inorder(node->left);
	printf("%d",node->info);
	Inorder(node->right);
}

int main()
{
	struct Node *root = New(1);
	root->left=New(2);
	root->right=New(3);
	root->left->left=New(4);
	root->left->right=New(5);
	root->right->left=New(6);
	root->right->right=New(7);
	printf("\nInorder Traversal of binary tree\n");
	Inorder(root);
	return 0;
}
