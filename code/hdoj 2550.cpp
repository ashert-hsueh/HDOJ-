#include <iostream>
#include <algorithm>

using  namespace std;

struct N
{
	int a,b;
}a[55];

bool cmp(N a,N b)
{
	return a.a<b.a;
}

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].a,&a[i].b);
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++)
		{
			for(int z=0;z<a[i].b;z++)
			{	
				printf(">+");
				for(int j=0;j<a[i].a-2;j++)
				{
					printf("-");
				}
				printf("+>\n");
			}
			printf("\n");
		}
	}
	return 0;
}
