#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define maxn=2000;

#define double p[maxn][maxn];
using namespace std;

void diamond()
{
	for(int i=1;i<=maxn;i++)
	{
		for(int j=1;j<=i;j++)
		{
		p[i][j]=1.0-((p[i-1][j]+p[i-1][j-1])/2);
		}
	}
}

void main()
{
    //int *a;
//	int a[maxn];
	int a[2000];

	int n,x;
	double ans=0;
	diamond();
	cin>>x;
	while(x--)
	{
	cout<<"Enter n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=n;j++)
	{
		ans+=p[n][j]*a[j];
	}
	cout<<"Answer:"<<ans<<endl;
	}
}

