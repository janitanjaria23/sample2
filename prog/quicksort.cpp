#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int partition(vector<int> &vec,int start,int finish)
{
	int pivot=vec[start];
	int lh=start;
	int rh=finish-1;
	while(true)
	{
		while(lh<rh && vec[rh]>=pivot)
		{
			rh--;
		}
		while(lh<rh && vec[lh]<pivot)
		{
			lh++;
		}
	if(lh==rh)
	{
		break;
	}
	int temp=vec[lh];
	vec[lh]=vec[rh];
	vec[rh]=temp;
	
	}
	if(vec[lh]>=pivot)
	{
	return start;
	}
	vec[start]=vec[lh];
	vec[lh]=pivot;
	return lh;
}
	
void quicksort(vector<int> &vec,int start,int finish)
{
	if(start>=finish)
	{
		return;
	}
	int boundary=partition(vec,start,finish);
	quicksort(vec,start,boundary-1);
	quicksort(vec,boundary+1,finish);
}
//sort() is basically a wrapper function that calls quicksort() and hence leads to recursive function which gives the ultimate result
void sort(vector<int> &vec)
{
	quicksort(vec,0,vec.size()-1);
	for(int i=0;i<=vec.size();i++)
	{
		cout<<vec[i];
	}
}
main()
{
	vector <int> vec;
	int number;
	while(number<100)
	{	cin>>number;
		vec.push_back(number);
	}
	sort(vec);
}
