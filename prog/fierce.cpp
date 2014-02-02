#include<stdio.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int x,t,n,m,d=0,s=0,ctr1=n,ctr2=m;
	int *c1,*l1,*c2,*l2;
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"Enter m:"<<endl;
	cin>>m;


	c1=new int[n];
	 l1=new int[n];
	c2=new int[m];
	l2=new int[m];
	cout<<"Enter for soints:"<<endl;	
	for(int i=0;i<n;i++)
	{
		cin>>l1[i];
		cin>>c1[i];
	}
	cout<<"Enter for sofloats:"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>l2[i];
		cin>>c2[i];
	}
	
	while(ctr2!=0)
	{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(l1[i]==l2[j])
			{
				if(c1[i]>c2[j] && c2[j]!=0)
				{
					c1[i]-=c2[j];
					c2[j]=0;
					ctr2--;
				}
				else if(c1[i]<c2[j] && c1[i]!=0)
				{
					c2[j]-=c1[i];
					c1[i]=0;
					d=c2[j]-c1[i];
					s+=(d);
				}
				else
				{
				c2[j]=0;
				c1[i]=0;
				ctr2--;
				d=1;
				s+=d;
				}
		
		       }		
		
		}
		}
//	cout<<"The min. no of chakras to be given:"<<s<<endl;


	}
	cout<<"The min. no of chakras to be given:"<<s<<endl;

		return(0);
}
