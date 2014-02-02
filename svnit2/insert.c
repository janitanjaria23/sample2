#include<stdio.h>
#include<string.h>

void ins(char x[],char y[],int n)
{
	char z[1000];
	int i,j;
	for(i=n+strlen(y);x[i]!='\0';i++)
	{
		for(j=0;j<1000;j++)
		{
		z[j]=x[i];
		}
	}

	for(i=0;x[i]!='\0';i++)
	{
		for(j=0;y[j]!='\0';j++)
		{
		x[i]=y[j];
		}
	}

	for(i=strlen(x);i<(strlen(x)+strlen(z));i++)
	{
		for(j=0;z[j]!='\0';j++)
		{
		x[i]=z[j];
		}
	}
}

main()
{
	char a[1000];
	char b[1000];
	int p;
	printf("enter string: ");
	scanf("%s",a);
	 printf("enter string to be replaced: ");
        scanf("%s",b);
	 printf("enter position:  ");
        scanf("%d",&p);
	ins(a,b,p);
}
