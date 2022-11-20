#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node* left;
	struct node* right;
};

struct node* New(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->info = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}


void Preorder(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->info);
	Preorder(node->left);
	Preorder(node->right);
}

int main()
{
	struct node* root = New(1);
	root->left = New(2);
	root->right = New(3);
	root->left->left = New(4);
	root->left->right = New(5);
    root->right->left = New(6);
    root->right->right = New(7);
	
	printf("\nPreorder traversal of binary tree is \n");
	Preorder(root);
	return 0;
}

