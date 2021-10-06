#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>n;
		double sum=0;
		int flag=1;
		for(int j=1;j<=n;j++)
		{
			sum +=flag*(1.0/j);
			flag=-flag;
		}
		cout<<fixed<<setprecision(2)<<sum<<endl;
	}
	return 0;
}
