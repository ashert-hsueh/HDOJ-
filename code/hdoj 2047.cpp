#include <iostream>

using namespace std;

long long dp[45];

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		dp[1]=3;
		dp[2]=8;
		for(int i=3;i<=n;i++)
		{
			dp[i]=dp[i-1]*2+dp[i-2]*2;
		}
		printf("%lld\n",dp[n]);
	}
	return 0;
}
