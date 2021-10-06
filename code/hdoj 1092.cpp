#include <iostream>

using namespace std;

int main()
{
	int N,sum=0,a;
	while(cin>>N)
	{
		if(N==0)break;
		for (int i=0;i<N;i++)
		{
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
 } 
