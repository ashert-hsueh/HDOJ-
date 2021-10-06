#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int k=1;
		for(int i=1;i<n;i++)
		{
			k=(1+k)*2;
		}
		cout<<k<<endl;
	}
	return 0;
}
