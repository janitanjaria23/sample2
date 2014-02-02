#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int n;
int ctr;
//int a[n];
void ap(int n,int a[])
{	int d1,d2;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(a[j]-a[i]==a[k]-a[j])
				{
					ctr++;
				}

			}
		}
	}
	cout<<"Answer : "<<ctr<<"\n";
	return;

}
main()
{

	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ap(n,a);
}
