#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "ll.h"

struct node_type *first;
struct node_type *front;
struct node_type *rear;


main()
{
    char ans[5];
    int y=0,o=0,c=0;
    while(o<4)
    {
        printf("\n\t1>Insert\n");
        printf("\t2>Delete\n");
        printf("\t3>Display\n");
        printf("\t4>Quit\n\n");

    printf("Enter your option:");
    scanf("%d",&o);

    if(o==1)
    {
    printf("Enter the data:");
    scanf("%d",&y);
    printf("Enter b:");
    scanf("%d",&c);
        if(c==1)
        {
            front=dbqueueins(y,c,&front,&rear);
        }
        else if(c==0)
        {
            rear=dbqueueins(y,c,&front,&rear);
        }
    }


    else if(o==2)
    {
        printf("Enter b:");
        scanf("%d",&c);
            if(c==1)
            {
            front=dbqueuedel(c,front,rear);
            }
            else if(c==0)
            {
                rear=dbqueuedel(c,front,rear);
            }

    }
    else if(o==3)
    {
        display2(front);
    }
    else if(o==4)
    {
            exit(0);
    }
    }
}
