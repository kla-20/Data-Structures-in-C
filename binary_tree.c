#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	struct node*left,*right;
};

struct node* createnode(int x);
struct node*find(struct node*root,int x);
void addchild(struct node*root,int p,int x);
void printtree(struct node*root);

struct node*createnode(int x)
{
	struct node*n=NULL;
	n=malloc(sizeof(struct node));
	n->val=x;
	n->left=NULL;
	n->right=NULL;
	return(n);
}

struct node*find(struct node*root,int x)
{
	struct node*t=NULL;
	if(root==NULL)
		return(NULL);
	if(root->val==x)
		return(root);
	t=find(root->left,x);
	if(t==NULL)
		t=find(root->right,x);
	return(t);
	
}
	
void addchild(struct node*root,int p,int c)
{
	struct node*parent=NULL,*child=NULL;
	
	if(root==NULL)
	{
		printf("no parent, cannot be inserted\n");
		return;
	}
	parent=find(root,p);
	if(parent==NULL)
	{
		printf("Parent not found\n");
		return;
	}
	if(parent->left!=NULL&&parent->right!=NULL)
	{
		printf("no vacancy for child\n");
		return;
		
	}
	child=createnode(c);
	if(parent->left==NULL)
	{
		parent->left=child;
		return;
	}
	if(parent->left!=NULL&&parent->right==NULL)
		parent->right=child;
	return;
}
	
void print(struct node*root) //inorder print
{
	if(root==NULL)
		return;
	print(root->left);
	printf("%d\t" , root->val);
	print(root->right);
}

int main()
{
	struct node*root;
	root=createnode(3);
	addchild(root,3,4);
	addchild(root,3,5);
	addchild(root,4,6);
	addchild(root,5,7);
	print(root);

}
