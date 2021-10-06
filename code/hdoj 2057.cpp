#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long n,m;
	while(scanf("%llx%llx",&n,&m)==2)
	{
		long long ans=n+m;
		if(ans>=0)
			printf("%llX\n",ans);
		else
		{
			ans=-ans;
			printf("-%llX\n",ans);
		}
	}
	return 0;
}
