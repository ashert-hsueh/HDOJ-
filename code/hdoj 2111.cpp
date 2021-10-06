#include <iostream>
#include <algorithm>

using namespace std;

struct N
{
	int p,m;
}a[105];

bool cmp(N a,N b)
{
	return a.p>b.p;
}

int main()
{
	int v,n;
	while(~scanf("%d",&v)&&v)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].p,&a[i].m);
		}
		sort(a,a+n,cmp);
		int ansv=0,ans=0;
		for(int i=0;i<n;i++)
		{
			if(ansv+a[i].m<=v)
			{
				ans+=a[i].m*a[i].p;
				ansv+=a[i].m;
			}
			else
			{
				ans+=(v-ansv)*a[i].p;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
