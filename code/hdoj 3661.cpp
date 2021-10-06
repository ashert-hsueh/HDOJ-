#include <iostream>
#include <algorithm>

using namespace std;

int a[1005];
int b[1005];

bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int n,t;
	while(~scanf("%d%d",&n,&t))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n,cmp);
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]+b[i]>t)
			{
				cnt+=a[i]+b[i]-t;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
