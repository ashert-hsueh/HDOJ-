#include <iostream>

using namespace std;

int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		long long ans=1;
		for(int i=0;i<n;i++)
		{
			ans *=3;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
