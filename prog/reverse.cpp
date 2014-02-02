#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
main()
{
    int t,n;
    string a[50],b[50];

    cin>>t;
    cin>>n;
    for(int j=0;j<t;j++)
    {
        for(int i=0;i<n;i++)
        {
            getline(cin,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            getline(cin,b[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                cout<<"begin ";
            }
            else if(a[n-i]=="left")
            {
                cout<<"right ";
            }
            else
            {
                cout<<"left ";
            }
            cout<<b[n-i-1]<<endl;
        }
        cout<<endl;
    }
}
