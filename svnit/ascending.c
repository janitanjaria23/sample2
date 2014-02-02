#include<stdio.h>
main()
{
	int a[10000];
	int temp,n,i,j;
	printf("enter no of terms: \n");	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter term: \n");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
}
