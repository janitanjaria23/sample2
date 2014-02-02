#include<stdio.h>


struct node{
 int data;
 struct node *left;
 struct node *right;

};

void insert(struct node **,int);
void search(struct node **,int);
void pre(struct node *);
void In(struct node *);
void post(struct node *);
struct node * copy(struct node *);
void del(struct node **,int);

main()

{
int ch=1,x,c;
struct node *t,*nw;
t=NULL;
printf("1.Insert\n2.Delete\n3.Search\n4.Traversal\n5.Copy\n6.Exit\n");
while(ch!=6)
 {
 printf("\nenter the choice : ");
 scanf("%d",&ch);
switch(ch)
{
 case 1:
  printf("\nenter the value :");
  scanf("%d",&x);

  insert(&t,x);
 // printf("%d",t->data);
  break;
  case 2 :
       printf("\n");
       printf("\nEnter the nuber to be deleted :");
       scanf("%d",&x);
       del(&t,x);
       
   
  break;

  case 3:
  printf("\nEnter the value :");
  scanf("%d",&x);
   search(&t,x);
  break;

  case 4:
       printf("\n1.preorder\n2.Inorder\n3.postorder\n");
       printf("enter the choice :");
       scanf("%d",&c);
       switch(c)
       {
                case 1:
                     printf("\n");
                     pre(t);
                     break;
                case 2:
                      printf("\n");
                     In(t);
                     break;
                case 3:
                      printf("\n");
                     post(t);
                     break;
       }
  
   break;
   case 5:
        printf("\n");
   nw=copy(t);
   printf("Tree Copied\n");
   break;






}




}
}
void insert(struct node **t,int x)
 {
    struct node *neww;
    neww=(struct node *)malloc(sizeof(struct node));
    struct node *pred,*curr;
    pred=NULL;
    curr=*t;
    neww->data=x;
    neww->left=NULL;
    neww->right=NULL;
  
    if(*t==NULL)
    {
    
                *t=neww;
                return;
                }
    else{

      while(curr!=NULL)
       {
          pred=curr;
          if(curr->data==x)
         {

          printf("\nsimilar data");
          return;
         }
         else if(curr->data > x)
          curr=curr->left;
          else curr=curr->right;






       }

    if(x<pred->data)
       pred->left=neww;
       else
       pred->right=neww;






    return;


    }
}


void search(struct node **t,int x)
{
     struct node *curr;
    curr=*t;
    while(curr!=NULL)
    {
                     if(x==curr->data)
                     {
                          printf("\n Node Found");
                          break;
                                      }
                      else if(x>curr->data)
                      {
                          curr=curr->right;           
                                     }
                       else
                       {
                           curr=curr->left;
                           }
                            
                     
                     
    } 
    if(curr==NULL)
    {
          printf("\nNode NOT Found");
                  
                  }
      return;            
    }


void pre(struct node *a)
     {
                
            if(a!=NULL)   
            {
                           printf(" %d ",a->data);
                          
                           }
            else 
             {
                
                 printf("\nEmpty Data\n");
                 return;
     
                 }
             if(a->left!=NULL)
              pre(a->left);
              if(a->right!=NULL)
              pre(a->right);
              return;    
     
     
     }
     
void In(struct node *a)
      {
               if(a==NULL)
              {
                    printf("\nEmpty Data\n");
                    return;
                    }
               
       if(a->left!=NULL)
         In(a->left);
          printf(" %d ",a->data);
         if(a->right!=NULL)
         In(a->right);
        
       
        return;
     
     
     
     
     
     }
     
void post(struct node *a)
{
        if(a==NULL)
              {
                    printf("\nEmpty Data\n");
                    return;
                    }
               
       if(a->left!=NULL)
         post(a->left);
          
         if(a->right!=NULL)
         post(a->right);
        printf(" %d ",a->data);
       
        return;
     
     
     
     
   }

struct node * copy(struct node *a)
{
     if(a==NULL)
     return NULL;
     struct node *nww;
     nww=(struct node *)malloc(sizeof(struct node));
     nww->data=a->data;
     nww->left=copy(a->left);
     nww->right=copy(a->right);
     return nww;
     
     
     
}
void del(struct node **a,int x)
{
   struct node *pred,*suc,*q,*parent,*curr;
   int k=0;
   if(*a==NULL)
   printf("\nEmpty tree\n");
   else if ((*a)->data ==x)
           {
                    k=1;
                    parent=*a;
                    curr=*a;
                    }
   if(k!=1)
    {
            curr=*a;
            parent=NULL;
    while(curr!=NULL)
    {
                     if(x==curr->data)
                     {
                        //  printf("\n Node Found");
                          break;
                                      }
                      else if(x>curr->data)
                      {
                           parent=curr;
                          curr=curr->right;           
                                     }
                       else
                       {
                           parent=curr;
                           curr=curr->left;
                           }
                            
                     
                     
    } 

    if(curr==NULL)
    {
          printf("\nNode NOT Found");
          return;
                  
    }
                
    }
    if(curr->left==NULL)
    q=curr->right;
    else if(curr->right==NULL)
    q=curr->left;
    else 
    {
         suc=curr->right;
         if(suc->left==NULL)
            {
              suc->left=curr->left;
              q=suc;
            }
         else
           {
            pred=curr->right;
            suc=pred->left;
            while(suc->left !=NULL)
             {
                            pred=suc;
                            suc=suc->left;
                            
             }        
             
            pred->left=suc->right;
            suc->left=curr->left;
            suc->right=curr->right;
              q=suc;    
           }
    }
    if(k!=1)
   {
             if(x>parent->data)
    parent->right=q;
    else
    parent->left=q;
}
else
  *a=suc;
    
  
    return;
           
}
     
     
     
     

