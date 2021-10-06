#include <iostream>

using namespace std;

int main()
{
	int M,a,sum=0;
	while(cin>>M)
	{
		for (int j=0;j<M;j++)
		{
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
