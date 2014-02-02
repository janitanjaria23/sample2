#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *lptr,*rptr;
};
struct node *t;
struct node *bnsins(struct node *t,int x)
{
	struct node *p,*pred,*cur;
	p=(struct node*)malloc(sizeof(struct node));
	p->info=x;
	p->lptr=NULL;
	p->rptr=NULL;	


	if(t==NULL)
	{
		t=p;
		return p;
	}

	else
	{
		pred=NULL;
		cur=t;
		while(cur!=NULL)
		{
			pred=cur;
			if(x==cur->info)
			{
				printf("Similar Data");
				break;
			}
			else if(x< cur->info)
			{
				cur=cur->lptr;
			}
			else
			{
				cur=cur->rptr;
			}
		}
			if(x< pred->info)
			{
				pred->lptr=p;
			}
			else
			{
				pred->rptr=p;
			}
	}
}

void mirror(struct node *cur)
{
	struct node *temp;
	temp=NULL;
	if(cur->lptr!=NULL)
	{
		mirror(cur->lptr);
	}
	if(cur->rptr!=NULL)
	{
		mirror(cur->rptr);
	}
	temp=cur->rptr;
        cur->rptr=cur->lptr;
        cur->lptr=temp;	
}

void in(struct node *te)
{
    if(te==NULL)
    {
        printf("Empty tree");
        return;
    }
    if(te->lptr!=NULL)
    {
        in(te->lptr);
    }
    printf("%d\n",te->info);
    if(te->rptr!=NULL)
    {
        in(te->rptr);
    }
}
void preorder(struct node *te)
{
	if(te!=NULL)
	{
		printf("%d\n",te->info);
	}
	else
	{
		if(te->lptr!=NULL)
		{
			preorder(te->lptr);
		}
		if(te->rptr!=NULL)
		{
			preorder(te->rptr);
		}
	}
}
main()
{
	int x,o;
	
	while(o<4)
	{printf("Enter option:");
	scanf("%d",&o);
		if(o==1)
		{
			printf("Enter element:");
			scanf("%d",&x);
			t=bnsins(t,x);
		}
		else if(o==2)
		{
			mirror(t);
		}
		else if(o==3)
		{
			in(t);
		}
		else if(o==4)
		{
			preorder(t);
		}
	}
}
