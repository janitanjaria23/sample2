#include<stdio.h>
#include<stdlib.h>
int max=0,ctr=0;

struct node
{
	int info;
	struct node *lptr,*rptr;
};
struct node *t;
struct node *bnsins(struct node *t,int x)
{ctr=0;
     struct node * cur,*pred,*suc,*parent,*p;
//	int max,ctr;
	p=(struct node*)malloc(sizeof(struct node));
    p->info=x;
    p->lptr=NULL;
    p->rptr=NULL;

    if(t==NULL)
    {
	t=p;
        return p ;
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
            {	ctr++;
                cur=cur->lptr;
            }
            else
            {	ctr++;
                cur=cur->rptr;
            }
		if(ctr>max)
		{
			max=ctr;
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

        return t;
    }

}
display()
{
	printf("Height : %d\n",max);
}

main()
{
	t=NULL;
	int x;
	int o;
	while(o<3)
	{
	printf("Enter option:");
	scanf("%d",&o);
	if(o==1)
	{	
	printf("Enter element:");
	scanf("%d",&x);
	t=bnsins(t,x);
	}
	else if(o==2)
	{
		display();
	}
	else
	{
		exit(1);
	}
	}
}
