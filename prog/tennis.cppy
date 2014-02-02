#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>

using namespace std;
int n=0,m=0,p=0,y=0,z=0;
void prob(vector<int> &vec,vector<int> &v1,vector<int> &v2);
void part(vector<int> &vec)
{
	int n=m;
//	cout<<"hi"<<endl;
	vector<int> v1;
	vector<int> v2;
	
	cout<<"hi"<<endl;
		for(int i=0;i<m;i++)
		{
			if(i<m/2)
			{
				y=vec[i];
				v1.push_back(y);
			}
			else
			{
				z=vec[i];
				v2.push_back(z);
			}
		}
	
	part(v1);
	part(v2);
	prob(vec,v1,v2);
}

void prob(vector<int> &vec,vector<int> &v1,vector<int> &v2)
{
	int s=0;
	int n=m;
	int n1=m/2;
	int n2=m/2;
cout<<"hi"<<endl;
	for(int i=0;i<m;i++)
	{
		if(vec[i]%2==0)
		{
			if(binary_search(vec.begin(),vec.end(),(vec[i]-1))==1)
			{
				s+=0;
			}
			else
			{
				s+=p;
			}
		}
		else if(vec[i]%2!=0)
		{
			if(binary_search(vec.begin(),vec.end(),(vec[i]+1))==1)
                        {
                                s+=0;
                        }
                        else
                        {
                                s+=p;
                        }
		}
	}

	cout<<s<<endl;
}

int main()
{
//	int n=0,m=0,p=0;
	vector<int> vec;
	int x=0;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter m:";
	cin>>m;
	cout<<"Enter p:";
	cin>>p;
	//cout<<"hi"<<endl;
	for(int i=0;i<m;i++)
	{
		//cout<<"hi"<<endl;
		cin>>x;
		vec.push_back(x);
	}

	part(vec);
	return (0);
}
