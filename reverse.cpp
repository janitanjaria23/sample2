#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

main()
{
	int t,n;
	string dir[50],dest[50];
	string l;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	cin>>n;
		getline(cin,l);
		for(int i=0;i<n;i++)
		{//getline(cin,l);
			cin>>dir[i];
			getline(cin,dest[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cout<<"Begin";
			}
			else if(dir[n-i]=="Left")
			{
				cout<<"Right";
			}
			else
			{
				cout<<"Left";
			}
			cout<<dest[n-1-i]<<endl;
		}
	
cout<<endl;
}
}
