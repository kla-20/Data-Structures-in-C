#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	struct node*left ,*right;
};
	
struct node *createterm(int v)
{
	struct node*t=NULL;
	t=malloc(sizeof(struct node));
	t->val=v;		
	t->left=NULL;
	t->right=NULL;
	return(t);
}

int min(struct node*root)
{
	int t=0;
	if(root->left==NULL&&root->right==NULL)
		return(root->val);
	if(root->left!=NULL)
		t=min(root->left);
	if(root->left==NULL&&root->right!=NULL)
		t=root->val;
	return(t);

		
}
	
struct node* find(struct node*root, int x)
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
	
struct node* insert(struct node *root,int n)
{
	if(root==NULL)
		return(createterm(n));
	if(n<root->val)
		root->left=insert(root->left,n);
	else if(n>root->val)
		root->right=insert(root->right,n);	
	return(root);
		
}

struct node *delete(struct node*root,int x)
{
	struct node*t=NULL;
	int v=0;
	if(root==NULL)
		return(NULL);
	if(x<root->val)
		root->left=delete(root->left,x);
	else if(x>root->val)
		root->right=delete(root->right,x);
	else
	{
		if(root->left!=NULL&&root->right!=NULL)
		{
			v=min(root->right);
			root->val=v;
			root->right=delete(root->right,v);
			
		}
		
		else
		{
			if(root->left!=NULL)
				t=root->left;
			else if(root->right!=NULL)
				t=root->right;
			free(root);
			return(t);
		}
	}
}


	
void printinorder(struct node*root)
{
	struct node*t=root;
	if(t==NULL)
		return;
	printinorder(root->left);
	printf("%d\t",root->val);
	printinorder(root->right);
	return;
}


int main()
{
	struct node*root=NULL;
	root=insert(root,5);
	root=insert(root,6);
	root=insert(root,3);
	root=insert(root,2);
	root=insert(root,8);
	root=insert(root,9);
	root=insert(root,1);
	root=delete(root,5);
	root=delete(root,6);
	root=delete(root,3);
	root=delete(root,2);
	root=delete(root,8);
	root=delete(root,9);
	printinorder(root);
	
}	
