struct node_type{
	int data;
	struct node_type *lptr, *rptr;
};

// Insert a node in doubly link list
// x is a value to be inserted in link list
// pos is a value of node in list indicates position in link list after or before which new node will be inserted
// If b=0 insert x after pos, and if b=1 insert x before pos value
void doubly_insert (int x, int pos, int b, struct node_type **l, struct node_type **r)
{
    struct node_type *p;
    struct node_type *s;
    p=(struct node_type*)malloc(sizeof(struct node_type));
    s=f;

    if(*r==NULL)
    {
        p->lptr=NULL;
        p->rptr=NULL;
        return p;
    }

    else if(*l==*r)
    {
        if(b==0)
        {
                p->rptr=*l;
                p->lptr=NULL;
                *l->rptr=NULL;
                *l=p;
        }
        else if(b==1)
        {
            *l->rptr=p;
            p->lptr=*l;
            p->rptr=NULL;
            *r=p;
        }
    }
    else
    {

      s=f;
      while(s!=pos)
      {
          pred=s;
          s=s->link;
      }

      if(b==0)
      {

      }

    }

}

// Delete a node from the doubly link list
// x is a value to be deleted from link list
void doubly_delete ( int x, struct node_type *&l, struct node_type *&r)
{
// code here
}

// Display the doubly link list
// If s=0 display list from l to r, if s=1 display list from r to l
void display (int s, struct node_type *&l, struct node_type *&r)
{
//code here
}
