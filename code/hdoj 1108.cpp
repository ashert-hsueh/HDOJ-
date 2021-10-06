#include <iostream>

using namespace std;

int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m<n)swap(m,n);
		int ns=n*m;
		while(n>0)
		{
			int t=m%n;
			m=n;
			n=t;
		}
		cout<<ns/m<<endl;
	}
	return 0;
}
