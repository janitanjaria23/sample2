#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct price
{
       int cost;
       char item[50];
       struct price *link;
};
struct customer
{
       int id;
       int total;
       char name[50];
       char add[50];
       struct customer *next;
       struct price *amt;
};

struct customer *first;
struct price *start;
struct customer *custins(char nam[],char ad[],struct customer *f)
{
       struct customer *p;
       struct customer *s;
    p=(struct customer *)malloc(sizeof(struct customer));

            strcpy(p->name,nam);
            		strcpy(p->add,ad);



             if(f==NULL)
             {
             return p;
             }

             else
             {
                 s=f;
                 while(s->next!=NULL)
                 {
                                     s=s->next;

                 }
                 p->next=NULL;
                 s->next=p;
               //p->total=0;
                 return f;
             }

}

struct price *priceins(int rate,char n[],struct price *st)
{
    struct price *p;
    struct price *t;
    struct customer *x;
    p=(struct price *)malloc(sizeof(struct price));
    strcpy(p->item,n);
    p->cost=rate;
    x->total+=p->cost;

    if(st==NULL)
    {
                return p;
    }


    else
    {
        t=st;
        while(t->link!=NULL)
        {
                            t=t->link;
        }
        t->link=p;
        p->link=NULL;


    return st;
    }
}
void display(struct customer *first,struct price *start)
{
    struct customer *t;
    struct price *s;
    t=NULL;
    s=NULL;
    if(first==NULL)
    {
        printf("No data");
        return;
    }
    else
    {
        t=first;
        s=start;

        while(t!=NULL)
        {
            printf("Name: %s\n",t->name);
            printf("Address: %s\n",t->add);
           // printf("Total: %d",t->total);

            while(s!=NULL)
            {
            printf("Item: %s\n",s->item);
            printf("Rate: %d\n",s->cost);
            //t->total=s->cost;
            s=s->link;
            }
            printf("Total: %d\n",t->total);

            t=t->next;
            printf("\n");
        }

    }
}

main()
{

      char name[50],add[50],item[50];
      int rate=0,o,ch=1;
      while(o!=1)
      {
      /*printf("Enter the customer id:");
      scanf("%d",&no);*/
      printf("Enter name:");
      scanf("%s",name);

      printf("Enter address:");
      scanf("%s",add);


      first=custins(name,add,first);
      while(ch!=0)
      {
      printf("Enter item name:");
      scanf("%s",item);
      printf("Enter the price of the item:");
      scanf("%d",&rate);

      start=priceins(rate,item,start);
        printf("Do you want to add more items?<1/0>:");

        scanf("%d",&ch);

      }
      ch=1;
        printf("Do you want to Display?<1/0>:");
        scanf("%d",&o);

      }
      printf("\n");
      display(first,start);
//getch();
//return 0;
}


