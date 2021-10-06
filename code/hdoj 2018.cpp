#include <iostream>

using namespace std;

long long int breed(int n);

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		cout<<breed(n)<<endl;
	}
	return 0;
}

long long int breed(int n)
{
	long long int b;
	if(n<=4)
	{
		b=n;
	}
	else
	{
		b=breed(n-1)+breed(n-3);
	}
	return b;
}
