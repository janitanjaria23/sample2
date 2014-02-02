#include<stdio.h>
void swap(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
main()
{
int ar[100][100]={0};
int i,j,k=1,l=1,m,n,p=1,ll,x=1,y=1,xx=1,yy=1,rc=0,rcrc=0;
scanf("%d",&ll);
m=1;
n=ll;
while(n>0)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(ar[x][y]==0)
ar[x][y]=p++;
else
p++;
if(n!=1 && j!=n-1)
y+=yy;
}
if(m!=1 && i!=m-1)
x+=xx;
}
rc++;
rcrc++;
p--;
swap(&m,&n);
if(rc%2==0)
{
xx*=-1;
yy*=-1;
}
if(rcrc%4==0)
{
n-=2;
x++;
y++;
}
}
for(i=1;i<=ll;i++)
{
for(j=1;j<=ll;j++)
printf("%6d",ar[i][j]);
printf("\n");
}
getch();
}
Chat Conversation End

