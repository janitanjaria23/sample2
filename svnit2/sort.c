#include<stdio.h>

void sort(int a[3][3])
{
	int temp,i,j,l;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		for(l=j+1;l<3;l++)
		{
		if(a[i][j+1]<a[i][j])
		{
		temp=a[i][j];
		a[i][j]=a[i][l];
		a[i][l]=temp;
		}
		}}}
	for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
			{
			printf("%d",a[i][j]);
		}	printf("\n");
}	
}

main()
{
	int x[3][3];
	int i,j;
	printf("enter elements: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	sort(x);
}
