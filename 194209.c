#include <stdio.h>
#include <stdlib.h>

struct node
{
  int e;
  struct node *l, *r;
};

struct node* create(int e)
{
  struct node *n= malloc(sizeof(struct node));
  n->e= e;
  n->l= n->r= NULL;
  return(n);
}

struct node* find(struct node *root, int x)
{
  struct node *t= NULL;
  if(root == NULL)
    return(NULL);
  if(x == root->e)
    return(root);
  t= find(root->l,x);
  if(t == NULL)
    t= find(root->r,x);
  return(t);
}

void addchild(struct node *root, int p, int c)
{
  struct node *parent= NULL, *child= NULL;
  parent= find(root,p);
  if(root == NULL)
  {
    printf("Error: root is NULL\n");
    return;
  }
  if(parent == NULL)
  {
    printf("Error: Parent not found\n");
    return;
  }
  if(parent->l != NULL && parent->r != NULL)
  {
    printf("Error: Parent has two children already.\n");
    return;
  }
  child= create(c);
  if(parent->l == NULL)
  {
    parent->l= child;
    return;
  }
  parent->r= child;
}

void print_in_order(struct node *root)
{
  if(root == NULL)
    return;
  print_in_order(root->l);
  printf("%d\n",root->e);
  print_in_order(root->r);
}

//Add code here (15M)
int sum(struct node *root)
{
	if(root->l==NULL&&root->r==NULL)
		return(root->e);
	if(root->l!=NULL&&root->r==NULL)
	{
		root->e=root->e+sum(root->l);
		return(root->e);
	}
	if(root->r!=NULL&&root->l==NULL)
	{
		root->e=root->e+sum(root->r);
		return(root->e);
	}
	if(root->l!=NULL&&root->r!=NULL)
	{
		root->e=root->e+sum(root->l)+sum(root->r);
		return(root->e);	
	}

}

//Add code here (10M)
int pathsum(struct node *root, int x)
{
	/*struct node*t=root,*k=NULL;
	if(t==NULL)
		return(0);
	if(t->e==x)
		return(t->e);
	if(t!=NULL)
	{
		k=t->e+pathsum(t->l,x);
		if(k==root->e)
			k=t->e+pathsum(t->r,x);
		if(k==root->e)
			return(0);
	}
	return(k); */

	
	
	
}

int main()
{
  int p= 0, c= 0, x= 0;
  struct node *root= NULL;
  scanf("%d",&p);
  root= create(p);
  while(1)
  {
    scanf("%d%d",&p,&c);
    if(p == -1 && c == -1)
      break;
    addchild(root,p,c);
  }
  print_in_order(root);
  printf("Sum of all nodes= %d\n",sum(root));
  while(1)
  {
    scanf("%d",&x);
    if(x == -1)
      break;
    printf("Path sum of %d = %d\n",x,pathsum(root,x));
  }
}
