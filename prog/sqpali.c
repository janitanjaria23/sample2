#include<stdio.h>
main()
{
	int rev=0,p,rem,s=0,x,sum=0,i,j;
	
	printf("enter no: ");
	scanf("%d",&x);

	p=x;
	while(p>0)
	{
	rem=p%10;
	rev=(rev*10)+rem;
	p=p/10;
	}
	if(rev==x)
	{
	for(i=1;;i++)
	{
		for(j=i;;j++)
		{
			if(s<=x)
			{
			s=(j*j);
			}		

			else
			{
			break;
			}
		}
	
	if(s==x)
	{printf("happy");
	/*	sum+=x;*/
	}}
}
	
	
	
}
