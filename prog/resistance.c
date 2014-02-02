#include<stdio.h>

main()
{
	int i,j,n,x=0,y=0,a=1,b=1,c=0;
	int p[10000];
	printf("enter n: ");
	scanf("%d",&n);
	for(i=1;i<=(2*n);i++)
	{
		c=a+b;
		p[i]=c;
		a=b;
		b=c;
	}

	for(i=1;i<=(2*n);i++)
	{
		if(i==((2*n)-1))
		{
			x=p[i];
		}
		else if(i==(2*n))
		{
			y=p[i];
		}
	}
	printf("answer: %d/%d \n",x,y);
	
	
}

