#include<stdio.h>
#include<stdlib.h>
struct tree
{
	int data;
	struct tree *right;
	struct tree *left;
};

struct node *create()
{
	int d;
	struct tree *newnode;
	newnode =(struct tree *)malloc(sizeof(struct tree));
    	printf("enter the data to be inserted(else insert 0)");
	scanf("%d",&d);	
	if(d==0)
	{
		return NULL;
	}
	newnode->data = d;
	printf("enter the left child of the node %d\n",newnode->data);
	newnode->left=create();
	printf("enter the right child of the node %d\n",newnode->data);
	newnode->right=create();
	return newnode;
}

void preorder(struct tree *root)
{
	if(root!=NULL)
	{
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
	}
	
}
void postorder(struct tree *root)
{
	if(root!=NULL)
	{
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
	}
	
}
void inorder(struct tree *root)
{
	if(root!=NULL)
	{
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	}
	
}

void main()
{
	struct tree *root;
	root=create();
	printf("preorder");
	preorder(root);
	printf("\n");
	printf("postorder");
	postorder(root);
	printf("\n");
	printf("inorder");
	inorder(root);
	printf("\n");
}
		
