#include<stdio.h>
main()
{
	int i,j,y,ctr=0,x,s1,s2,ctr1=0,ctr2=0,ctr3=0,crt=0,n,m,p,b;
	int a[1000][1000];
	printf("enter n: \n");
	scanf("%d",&n);
	printf("enter m: \n");
	scanf("%d",&m);
if(n==m)
{
	printf("Please re-enter\n");
}
else
{
	//user enters the elements of the matrix
	printf("\nPlease start entering the elements of the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                      printf("%d ",a[i][j]);
                }       printf("\n");
        }

	char n1[1000];
	char n2[1000];
	printf("\nenter player one's name: \n");
	scanf("%s",n1);
	printf("enter player two's name: \n");
	scanf("%s",n2);


while(ctr3<(n*m))
{
	printf("%s's input\n",n1);
	printf("*%s*, enter the row you want to use:  \n",n1);
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		if(i==x)
		{
			if(ctr<1)
			{
				if(a[i][j]>0)
				{
				printf("Enter no to be subtracted: \n");
				scanf("%d",&s1);
				a[i][j]-=s1;
					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							printf("%d ",a[i][j]);
						}	printf("\n");
					}
				/*printf("%d \n",a[i][j]);*/
				ctr++;
				}

				else if(a[i][j]<=0)
				{
					if(ctr3==((n*m)))
					{
						p=1;
                        b=0;

					}
                    else{
                        ctr3++;
                        }
			}
		}
		}ctr=0;

	}

	printf("%s's input\n",n2);
	printf("*%s*, enter the row you want to use:  \n",n2);
        scanf("%d",&y);
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                if(i==y)
                {
                        if(crt<1)
                        {
                                if(a[i][j]>0)
                                {
                                printf("Enter no to be subtracted: \n");
                                scanf("%d",&s2);
                                a[i][j]-=s2;

					for(i=0;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							printf("%d ",a[i][j]);
						}	printf("\n");
					}
                                /*printf("%d",a[i][j]);*/
                                crt++;
                                }

				else if(a[i][j]<=0)
				{
					if(ctr3==((n*m)))
					{
						b=1;
						p=0;

					}
					else
					{
                    ctr3++;
                    }}
				}
			}
                }
                }crt=0;

        }

}

		if(p==1)
		{
			printf("######################## %s wins############################ \n",n2);
		}

		else
		{
			printf("################%s wins###################\n",n1);
		}
}
}
