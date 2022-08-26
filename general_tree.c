#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val;
	int type;
	int size;
	struct node*fc,*ns;
};

struct node* createnode(int val);
struct node*find(struct node*root,int x);
void addchild(struct node*root,int p,int c);
void print(struct node*root,int depth);

struct node* createnode(int x)
{	
	struct node*n=NULL;
	n=malloc(sizeof(struct node));
	n->val=x;
	n->fc=NULL;
	n->ns=NULL;
	return(n);
}


struct node*find(struct node*root,int x)
{
	struct node*t=NULL;
	if(root==NULL)
		return(NULL);
	if(root->val==x)
		return(root);
	t=find(root->fc,x);
	if(t==NULL)
		t=find(root->ns,x);
	return(t);
}

void addchild(struct node*root,int p,int c)
{
	struct node *child=NULL,*parent=NULL,*t=NULL;
	if(root==NULL)
	{		
		printf("error\n");
		return;
	}
	parent=find(root,p);
	if(parent==NULL)
	{
		printf("parent not found\n");
		return;
	}
	child=createnode(c);
	if(parent->fc==NULL)
	{
		parent->fc=child;
		return;
	}
	t=parent->fc;
	while(t->ns!=NULL)
		t=t->ns;
	t->ns=child;
}

void print(struct node*root,int depth)
{
	int i=0;
	struct node*t=NULL;
	if(root==NULL)
		return;
	for(i=0;i<depth;i++)
	{
		printf("\t");
		printf("%d\n" ,root->val);
	}
	t=root->fc;
	while(t!=NULL)
	{
		print(t,depth+1);
		t=t->ns;
	}
		
}

int main()
{
	struct node*root;
	root=createnode(5);
	addchild(root,5,1);
	addchild(root,5,2);
	addchild(root,5,3);
	addchild(root,5,4);
	addchild(root,4,7);
	addchild(root,3,9);
	addchild(root,25,8);
	print(root,0);
}
	

	
