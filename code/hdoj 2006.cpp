#include <iostream>

using namespace std;

int main()
{
	int n,d;
	while(cin>>n)
	{
		int sum=1;
		for(int i=0;i<n;i++)
		{
			cin>>d;
			if(d%2!=0)
			{
				sum *= d;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
