#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

void merge(vector<int> &vec,vector<int> &v1,vector<int> &v2);


void sort(vector<int> &vec)
{
	int n=vec.size();
	if(n<=1)
	{
		cout<<"Empty Vector"<<endl;
		return;
	}
	else
	{
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			if(i<n/2)
			{
				v1.push_back(vec[i]);
			}
			else
			{
				v2.push_back(vec[i]);
			}
		}

		sort(v1);
		sort(v2);
		merge(vec,v1,v2);
	}

}

void merge(vector<int> &vec,vector<int> &v1,vector<int> &v2)
{
	int n1=v1.size();
	int n2=v2.size();
	int p1=0,p2=0;

	while(p1<n1 && p2<n2)
	{
		if(v1[p1]<v2[p2])
		{
			vec.push_back(v1[p1]);
			p1++;
		}
		else
		{
			vec.push_back(v2[p2]);
			p2++;
		}
	}

	while(p1<n1)
	{
		vec.push_back(v1[p1]);
		p1++;
	}
	while(p2<n2)
        {
                vec.push_back(v2[p2]);
                p2++;
        }
	for(int i=0;i<n1+n2;i++)
	{
		cout<<vec[i]<<endl;
	}
}

void main()
{
	vector<int> vec;
	cout<<"Enter the elements: "<<endl;
	sort(vec);	
	for(int i=0;vec[i]!='\0';i++)
	{
		cin>>vec[i]<<endl;
		vec.push_back(vec[i]);
	}
	
	
//	return 0;
}

