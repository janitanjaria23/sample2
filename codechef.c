void main()

{

	int s[20],n,i,j,k;

	clrscr();

	printf("\nEnter no.of elements: ");

	scanf("%d",&n);

	printf("\nNow enter the elements...");

	for(i=0;i<n;i++)

	{

		printf("\nElement no.%d : ",(i+1));

		scanf("%d",&s[i]);

	}

	for(i=0;i<(n-2);i++)

	{

		for(j=(i+1);j<(n-1);j++)

		{

			for(k=(j+1);k<n;k++)

			{



				if((s[j]-s[i])==(s[k]-s[j]))

					printf("\n(%d,%d,%d) (%d,%d,%d)",(i+1),(j+1),(k+1),s[i],s[j],s[k]);

				else

					continue;

			}

		}

	}

	getch();

}
