#include<iostream>
using namespace std;

class  janit
{
        int a,b,s;
        public:
        void sum()
        {
        cin>>a;
        cin>>b;
        s=a+b;
        cout<<"sum= "<<s<<endl;
        }
};
main()
{
        janit j;
        j.sum();
}
