#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include "ll.h"

struct node_type *first;
struct node_type *front;
struct node_type *rear;


main()
{
    char ans[5];
    int x=0,o=0,b=0;
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
    scanf("%d",&x);
    printf("Enter b:");
    scanf("%d",&b);
        if(b==1)
        {
            front=destack(x,b,front,rear);
        }
        else if(b==0)
        {
            rear=destack(x,b,front,rear);
        }
    }


    else if(o==2)
    {
        printf("Enter b:");
        scanf("%d",&b);
        if(b==1)
        {
        front=destackdel(x,front,rear);
        }
        else if(b==0)
        {
        rear=destackdel(x,front,rear);
        }

    }
    else if(o==3)
    {
        display(first);
    }
    }
//getch();
}
