#include <iostream>

using namespace std;

int main()
{
	int N,M,sum=0,a;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>M;
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
