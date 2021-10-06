#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int d[100];
		int sum=0,min,max;
		for(int i=0;i<n;i++)
		{
			cin>>d[i];
			sum += d[i];
			if(i==0)
			{
				min=d[i];
				max=d[i];
			}
			if(d[i]>max)
			{
				max=d[i];
			}
			if(d[i]<min)
			{
				min=d[i];
			}
		}
		cout<<fixed<<setprecision(2)<<(sum-min-max)/(1.0*(n-2))<<endl;
	}
	return 0;
}
