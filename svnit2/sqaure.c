#include<stdio.h>
void ab(int d)
{
	int s1=0,n,s2=0,i;
	for(i=1;i<=d;i++)
	{
		s1+=i;
		s2+=(i*i);
	}

	printf("sum: %d\n",s1);

        printf("square:%d\n ",s2);

	
}

main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	ab(n);
	 
}
