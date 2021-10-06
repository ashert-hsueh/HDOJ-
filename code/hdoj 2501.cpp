#include <iostream>

using namespace std;

int solve(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 3;
	}
	else
	{
		return solve(n-1)+2*solve(n-2);
	}
}

int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n",solve(n));
	}
	return 0;
}
