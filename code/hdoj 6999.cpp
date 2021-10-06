#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int T;
	long long a,b;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld",&a,&b);
		long long maxx=abs(a-b);
		if(maxx==1)
		{
			printf("-1 -1\n");
		}
		else if(maxx==0)
		{
			if(a>1)
			{
				printf("2 %lld\n",a);
			}
			else
			{
				printf("-1 -1\n");
			}
		}
		else
		{
			int f=0;
			for(int i=2;i<=sqrt(maxx);i++)
			{
				if(maxx%i==0)
				{
					f=1;
					printf("%d",i);
					break;
				}
			}
			if(f)
			{
				printf("% lld\n",maxx);
			}
			else
			{
				printf("%lld %lld\n",maxx,maxx);
			}
		}
	}
	return 0;
}
