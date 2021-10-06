#include <iostream>
#include <cmath>

using namespace std;

long long cnt;

int main()
{
	int T,n,k;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&k);
		cnt=pow(2,n-k);
		printf("%lld\n",cnt);
	}
	return 0;
}
