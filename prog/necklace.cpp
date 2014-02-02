#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
void necklace(int n,char a[])
{
	int p,ctr1,ctr2,max;
	for(int i=1;i<=n;i++)
	{
		p=i;
		if(p==1)
		{
		  for(int j=n;j>1;j--)
		  {
			while(a[i]==a[j] || a[j]=='w' || a[i]=='w')
			{
			/*	if(a[j]=='w')
				{
					a[j]=a[i];
				}
				else
				{
					a[i]=a[j];
				}*/
				ctr1++;
			}
			/*if(ctr>max)
			{
				max=ctr;
			}*/
		   }
			for(int j=2;j<=n;j++)
			{
				while(a[j]==a[j+1] || a[j]=='w' || a[j+1]=='w')
				{
					ctr2++;
				}
			}
			if(ctr1+ctr2>max)
                        {
                                max=(ctr1+ctr2);
                        }

		}

		else if(p==n)
		{
				for(int j=1;j<n;j++)
				{
					while(a[i]==a[j] || a[i]=='w' || a[j]=='w')
					{
						/*if(a[j]=='w')
						{
							a[j]=a[i];
						}
						else
						{
							a[i]=a[j];
						}*/
						ctr1++;
					}
				}
				for(int j=n-1;j>0;j--)
				{
					while(a[j]==a[j-1])
					{
						ctr2++;
					}
				}
				if(ctr1+ctr2>max)
				{
					max=(ctr1+ctr2);
				}
		}
			
		else
		{
			for(int j=p+1;j<=n;j++)
			{
				while(a[j]==a[j+1] || a[j]=='w' || a[j+1]=='w')
				{
					ctr1++;
				}
			}
			/*	if(ctr>max)
				{
					max=ctr;
				}
			*/
			for(int j=p;j>0;j--)
			{
				if(j==1)
				{
					for(int k=n;k>1;k--)
                  			{
                        			while(a[j]==a[k] || a[k]=='w' || a[j]=='w')
                        			{
                                			if(a[k]=='w')
                                			{
                                        			a[k]=a[j];
                                			}
                                			else
                                			{
                                        			a[j]=a[k];
                                			}
                                			ctr2++;
                        			}

                   			}
				}

				else
				{
					while(a[j]==a[j-1] || a[j]=='w' || a[j-1]=='w')
					{
						ctr2++;
					}
				}
			}
				if(ctr1+ctr2>max)
				{
					max=(ctr1+ctr2);
				}

		}
		
	}
	cout<<"Answer: "<<max<<endl;

}

main()
{
	int n;
char ch;
	
	//a=new char[n];
	cout<<"Enter n:"<<endl;
	cin>>n;
	char *a;
	cout<<"Enter the colour of the beads:"<<endl;
	for(int i=1;i<=5;i++)
	{
		
		cin>>a;
	}
	necklace(n,a);
}
