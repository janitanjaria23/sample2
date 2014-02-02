#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
	int ss=0,n=0,x=0,min=0,s=0,ctr=0,t=0;
	cin>>t;

	while(ctr<t)
	{
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter x:";
	cin>>x;

	int *a;
	a=new int[n];
	//inputting the values of the notes
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	if(n==1)
	{
	if(s>x){
	cout<<(s/x)<<endl;}
	}
	
	else{goto l;} 
	ss=s;
		l:
{		if(s%x==0)
		{

			cout<<(s/x)<<endl;
		}


		else
		{
		//checking the inadequate condition
		for(int i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		ss-=min;
		if(ss>0)
		{
			if(ss%x!=0)
			{
			cout<<"-1"<<endl;
			}
		}

	/*	else
		{
			cout<<(s/x)<<endl;
		}*/
		}}
	ctr++;

	}
	return (0);
}
