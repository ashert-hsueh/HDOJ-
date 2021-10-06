#include <iostream>

using namespace std;

int s[1001];

void init()
{
	for(int i=1;i<=1001;i++)
	{
		s[i]=i;
	}
}

int find_set(int x)
{
	return x==s[x]?x:find_set(s[x]);
}

void union_set(int x,int y)
{
	x=find_set(x);
	y=find_set(y);
	if(x!=y)
	{
		s[x]=s[y];
	}
}

int main()
{
	int n,m;
	int a,b;
	while((~scanf("%d",&n))&&n)
	{
		scanf("%d",&m);
		init();
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d",&a,&b);
			union_set(a,b);
		}
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			if(i==s[i])
			{
				cnt++;
			}
		}
		printf("%d\n",cnt-1);
	}
	return 0;
}
