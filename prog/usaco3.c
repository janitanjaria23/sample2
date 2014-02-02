#include<stdio.h>
main()
{
	int j,a,b,x,y,i,z,rem,d=0,c=0;
	printf("a: ");
	scanf("%d",&a);	
	printf("b: ");	
	scanf("%d",&b);
	int s;
	int p[1000];int q[1000];
	x=a;
	y=b;

	for(i=0;x>0;i++,d++)
	{
		rem=x%10;
		a[i]=rem;
		x=x/10;
	}
	
	for(i=0;y>0;i++,c++)
	{
		z=y%10;
		b[i]=z;
		y=y/10;
	}

	for(i=0;i<d;i++)
	{
		for(j=0;j<c;j++)
		{
			s+=((a[i])*(b[j]));
		}
	}
	printf("%d",s);
}
