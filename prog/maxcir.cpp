#include<stdio>
#include<cmath>
#include<iostream>
#include<fstream>
#include<algorithm>
vector<int> x;
vector<int> y;
input()
{
	int n,k;
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"Enter k:"<<endl;
	cin>>k;
	cin>>ax;
 	cin>>ay;
	cin>>bx;
 	cin>>by;
 	cin>>cx;
	 cin>>cy;
	for(int i=1;i<=n;i++)
	{
	cin>>x[i];
	cin>>y[i];
	}
}

	for(int ctr=1;ctr<=k;ctr++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n && k<=ctr;j++)
			{
				d=sqrt(pow(ax-bx,2)+pow(ay-by,2)+pow(by-cy,2)+pow(bx-cx,2)+pow(ax-cx,2)+pow(ay-cy,2));
				if(d>max)
				{
					max=d;
					k++;
				}
				
