#include<ciostream>
#include<conio>
using namespace std;
class golden
{
	public:
	tax()
	{
	int it,s1,s2,k,n,m;
	int p[300],tax[300];
	
	cin>>it>>"\n";
	cin>>s1>>"\n";
	cin>>s2>>"\n";
	cin>>k>>"\n";
	cin>>n>>"\n";
	
	tax[0]=it;
	for(int i=1;i<s1;i++)
	{
		tax[i]=tax[i-1]+1;
	}
	
	for(int i=s1;i<s2;i++)
	{
		tax[i]=(2*tax[i-1]);
	}
	
	for(int i=s2;i<n;i++)
	{
		for(int j=1;j<k;j++)
		{
		m*=p[i-j];
		}
		tax[i]=m;
	}

	cout<<"tax is: "<<tax[n]<<endl;
	}
};
main()
{
	golden gt;
	gt.tax();
}
