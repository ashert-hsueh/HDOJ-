#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Program
{
	int s,e;
}a[105];

bool cmp(Program a,Program b)
{
	return a.e<b.e;
}

int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&a[i].s,&a[i].e);
		}
		sort(a,a+n,cmp);
		int t_e=a[0].e;
		int sum=1;
		for(int i=1;i<n;i++)
		{
			if(a[i].e>t_e&&a[i].s>=t_e)
			{
				sum++;
				t_e=a[i].e;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
