#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
int max=0,ctr=0;
struct node
{
    int info;
    struct node *lptr,*rptr;
};

struct node *t;
struct node *p;
pre(struct node *t)
{
    if(t!=NULL)
    {
        printf("%d\n",t->info);
  //      getch();
    }
    else
    {
        printf("Empty tree");
        return;
    }
    if((t)->lptr!=NULL)
    {
        pre((t)->lptr);
    }
    if((t)->rptr!=NULL)
    {
        pre((t)->rptr);
    }
    return;
    
}

post(struct node *t)
{
    if(t==NULL)
    {
        printf("Empty tree");
        return;
    }
    if((t)->lptr!=NULL)
    {
        post((t)->lptr);
    }
    if((t)->rptr!=NULL)
    {
        post((t)->rptr);
    }
    printf("%d\n",t->info);
// getch();
       return;
}
mirror(struct node *cur)
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
in(struct node *t)
{
    if(t==NULL)
    {
        printf("Empty tree");
        return;
    }

    if((t)->lptr!=NULL)
    {
        in((t)->lptr);
    }
    printf("%d\n",t->info);
    //getch();
    if((t)->rptr!=NULL)
    {
        in((t)->rptr);
    }
    return;
}

struct node *bnsins(struct node *t,int x)
{ctr=0;
     struct node * cur,*pred,*suc,*parent;
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
printf("Height: %d",max);

        return t;
    }
}

struct node *bnsdel(struct node *t,int x)
{
    struct node *cur,*pred,*suc,*parent,*q;
    char d;
    int found=0;
    if(t==NULL)
    {
        printf("Empty tree");
        exit(1);
    }
	else if(t->info==x)
	{
		found=1;
		parent=t;
		cur=t;
	}
    if(found!=1)
    {	
        cur=t;
        parent=NULL;
        
        while(cur!=NULL)
        {
            if(cur->info==x)
            {
                
		break;

            }
            else if(x< cur->info)
            {
                parent=cur;
                cur=cur->lptr;
                d='l';
            }
            else
            {

                parent=cur;
                cur=cur->rptr;
                d='r';
            }
        }
        if(cur==NULL)
        {
            printf("Node not found");
            exit(1);
        }

    }
    if(cur==t)
	{

    if(cur->lptr==NULL)
    {
        q=cur->rptr;
    }
    else if(cur->rptr==NULL)
    {
        q=cur->lptr;
    }
    else
    {
        //we are using the concept of inorder traversal so we are branching right
        suc=cur->rptr;
        if(suc->lptr==NULL)
        {
            suc->lptr=cur->lptr;
            q=suc;
        }
        else
        {
            pred=cur->rptr;
            suc=pred->lptr;

            while(suc->lptr!=NULL)
            {
                pred=suc;
                suc=suc->lptr;
            }
            pred->lptr=suc->rptr;
            suc->lptr=cur->lptr;
            suc->rptr=cur->rptr;
            q=suc;
        }
    }         
	if(found!=1)
	{
        if(x<parent->info)
        {
            parent->lptr=q;
        }
        else
        {
            parent->rptr=q;

        }
	}
	else 
	{
		t=suc;
	}
    }

	else
	{
	if(cur->lptr==NULL)
    {
        q=cur->rptr;
    }
    else if(cur->rptr==NULL)
    {
        q=cur->lptr;
    }
    else
    {
        //we are using the concept of inorder traversal so we are branching right
        suc=cur->rptr;
        if(suc->lptr==NULL)
        {
            suc->lptr=cur->lptr;
            q=suc;
        }
        else
        {
            pred=cur->rptr;
            suc=pred->lptr;

            while(suc->lptr!=NULL)
            {
                pred=suc;
                suc=suc->lptr;
            }
            pred->lptr=suc->rptr;
            suc->lptr=cur->lptr;
            suc->rptr=cur->rptr;
            q=suc;
        }
    }         
	if(found!=1)
	{
        if(x<parent->info)
        {
            parent->lptr=q;
        }
        else
        {
            parent->rptr=q;

        }
	}
	else 
	{
		t=suc;
	}
	}
    return t;
}

struct node *bnssearch(struct node *t,int x)
{
    struct node * cur,*pred,*suc,*parent,*q;
    char d;
    int found=0;
    if(t==NULL)
    {
        printf("Empty tree");
        exit(1);
    }

    else
    {
        cur=t;
        found=0;
        while(found!=1 && cur!=NULL)
        {
            if(cur->info==x)
            {
                found=1;

            }
            else if(x< cur->info)
            {
                parent=cur;
                cur=cur->lptr;
                d='l';
            }
            else
            {

                parent=cur;
                cur=cur->rptr;
                d='r';
            }
        }
        if(found==0)
        {
            printf("Node not found\n");
        }
        else if(found==1)
        {
            printf("Node found\n");
        }
    }
}

struct node *copy(struct node *t)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(t==NULL)
	{
		return NULL;
	}

	p->info=t->info;

	p->lptr=copy(t->lptr);
	p->rptr=copy(t->rptr);
	return p;

}


main()
{
    t=NULL;
    int x=0,o=0,ch=0;

	while(o<9)
	{
	printf("1>Insertion\n");
    	printf("2>Deletion\n");
	printf("3>Search\n");
	printf("4>Copy\n");
	printf("5>Inorder Traversal\n");
    	printf("6>Preorder Traversal\n");
    	printf("7>Postorder Traversal\n");

	printf("Enter your option:");
    	scanf("%d",&o);

		if(o==1)
		{
    			printf("Enter element:");
    			scanf("%d",&x);
    		
			t=bnsins(t,x);
		}
		else if(o==2)
		{
			printf("Enter the element you want to delete:");
			scanf("%d",&x);
			t=bnsdel(t,x);
		}
		else if(o==3)
		{
		    printf("Enter the element you want to search:");
		    scanf("%d",&x);
		    bnssearch(t,x);
		}
		else if(o==4)
		{
		    t=copy(t);
		}
		else if(o==5)
		{
			in(t);
		}
		else if(o==6)
		{
			pre(t);
		}
		else if(o==7)
		{
			post(t);
		}
		else if(o==8)
		{
			mirror(t);
		}

		printf("\n\n");

	}
}

