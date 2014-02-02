#include<stdio.h>
void palin(int x)
{	
		
	int rev=0,p,rem;
	p=x;
	while(p>0)
	{
	rem=p%10;
	rev=(rev*10)+rem;
	p=p/10;
	}
	
	if(rev==x)
	{
		printf("1 \n");
	}
	else
	{
		printf("0 \n");
	}
}

main()
{	
	int n;
	
	printf("enter no: ");
	scanf("%d",&n);
	palin(n);
}
