#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
main()
{
	int n,ctr1,ctr2,max;
	cout<<"Enter n:"<<endl;
	cin>>n;
	char a[n];

	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	char b[n],c[2*n];
	
	for(int i=1;i<=n;i++)
	{
		b[i]=a[i];
	}
	
	for(int i=1;i<=(2*n);i++)
	{
		if(i<=n)
		{
			c[i]=a[i];
		}
		else 
		{
			c[i]=b[i-n];
		}
	}

	for(int i=1;i<=(2*n);i++)
	{
			for(int j=i+1;j<=(2*n);j++)
			{
				while(a[i]==a[j] || a[j]=='w' || a[i]=='w')
				{
					ctr1++;
				}
			}
			for(int j=i;j>0;j--)
			{
				while(a[i]==a[j] || a[j]=='w' || a[i]=='w')
				{
					ctr2++;
				}
			}
			if((ctr1+ctr2)>max)
			{
				max=ctr1+ctr2;
			}
	}
	cout<<"Max: "<<max;
}
