#include<stdio.h>
#include<stdlib.h>

struct node
{
	int e;
	struct node*l,*r;
	int h;
};
struct node *create(int e);
int max(int n1,int n2);
int height(struct node*n);
struct node*insert(struct node*root,int e);
struct node* rightrotate(struct node*root);
struct node* leftrotate(struct node*root);
struct node*doublelr(struct node*root);
struct node*doublerl(struct node*root);
void inorderprint(struct node*root);
void preorderprint(struct node*root);
void postorderprint(struct node*root);
	
struct node *create(int e)
{
	struct node*n=NULL;
	n=malloc(sizeof(struct node));
	n->e=e;
	n->l=n->r=NULL;
	n->h=0;	
	return(n);
	
}

int max(int n1,int n2)
{
	if(n1>n2)
		return(n1);
	return(n2);
}
	
int height(struct node*n)
{
	if(n==NULL)
		return(-1);
	else
		return(n->h);
}
struct node*insert(struct node*root,int e)
{
	if(root==NULL)
		return(create(e));
	if(e<root->e)
	{
		root->l=insert(root->l,e);
		if(height(root->l)-height(root->r)==2)
		{
			if(e<root->l->e)
				root=rightrotate(root);
			else
				root=doublelr(root);
		}
	}
	
	else if(e>root->e)
	{
		root->r=insert(root->r,e);
		if(height(root->r)-height(root->l)==2)
		{
			if(e<root->r->e)
				root=doublerl(root);
			else
				root=leftrotate(root);
		}
	}
		
	root->h=max(height(root->l), height(root->r))+1;
	return(root);
}

struct node* rightrotate(struct node*root)
{
	struct node*nr=NULL;
	if(root==NULL||root->l==NULL)
		return(root);
	nr=root->l;
	root->l=nr->r;
	nr->r=root;
	root->h=max(height(root->l),height(root->r))+1;
	nr->h=max(height(nr->l),height(nr->r))+1;
	return(nr);
}

struct node* leftrotate(struct node*root)
{
	struct node*nr=NULL;
	if(root==NULL||root->r==NULL)
		return(root);
	nr=root->r;
	root->r=nr->l;
	nr->l=root;
	root->h=max(height(root->l),height(root->r))+1;
	nr->h=max(height(nr->l),height(nr->r))+1;
	return(nr);
	
}


struct node*doublelr(struct node*root)
{	
	root->l=leftrotate(root->l);
	return(rightrotate(root));

}
struct node*doublerl(struct node*root)
{
	root->r=rightrotate(root->r);
	return(leftrotate(root));
	
}
	
void inorderprint(struct node*root)
{
	if(root==NULL)
		return;
	inorderprint(root->l);
	printf("%d\n" ,root->e);
	inorderprint(root->r);
	
}
void preorderprint(struct node*root)
{
	if(root==NULL)
		return;
	printf("%d\n" ,root->e);
	preorderprint(root->l);
	preorderprint(root->r);
	
}
void postorderprint(struct node*root)
{
	if(root==NULL)
		return;
	postorderprint(root->l);
	postorderprint(root->r);
	printf("%d\n" ,root->e);
	
}



int main()
{
	struct node*root=NULL;
	root=create(1);
	root=insert(root,2);
	root=insert(root,5);
	root=insert(root,6);
	root=insert(root,3);
	root=insert(root,8);
	root=insert(root,4);
	root=insert(root,0);
	root=insert(root,7);
	root=insert(root,9);
	
 	preorderprint(root);
	printf("\n");
 	postorderprint(root);
	printf("\n");
	inorderprint(root);
	printf("\n");
}
