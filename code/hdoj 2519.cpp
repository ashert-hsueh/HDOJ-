#include <iostream>

using namespace std;

int main()
{
	int T;
	long long n,m;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld",&n,&m);
		long long ans=1;
		if(n<m)
		{
			ans=0;
		}
		else if(m==0)
		{
			ans=1;
		}
		else
		{
			for(long long i=1;i<=n-m;i++)
			{
				ans=ans*(m+i)/i;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
