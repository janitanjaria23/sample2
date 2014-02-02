#include<stdio.h>

void fact(int x)
{
	
	int i,f=1;
	for(i=1;i<=x;i++)
	{
	f*=i;
	}
	printf("factorial:%d ",f);
}

main()
{	int n;
	printf("enter no: ");
	scanf("%d",&n);
	fact(n);
}
