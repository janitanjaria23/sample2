#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
    int t,n,max=0,a;
    int x[1000];
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>n;
      //  cout<<"hi";
        int a=(n/2)+1;
        x[j]=a;
        //cout<<a<<endl;
    }
    cout<<"The output is:"<<endl;
    for(int i=0;i<t;i++)
    {
        cout<<x[i]<<endl;
    }
}
