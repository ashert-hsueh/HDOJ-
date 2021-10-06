#include <iostream>

using namespace std;

long long a[505];

void init()
{
	a[1]=1;
	for(int i=2;i<=505;i++)
	{
		a[i]=a[i-1]+2*i-1;
		for(int j=i-1;j>0;j--)
		{
			a[i]+=j;
		}
		if(i>=4)
		{
			int t=i-3;
			for(t;t>0;t=t-2)
			{
				a[i]+=t;
			}
		}
	}
}

int main()
{
	int n;
	init();
	while(~scanf("%d",&n))
	{
		printf("%lld\n",a[n]);
	}
	return 0;
}
