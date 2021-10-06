#include <iostream>
#include <string.h>

using namespace std;

int set[100005];
bool f;
int M=100005;
 
int find_set(int x)
{
	return x==set[x]?x:set[x]=find_set(set[x]);
}

void Union(int x,int y)
{
	int tx=find_set(x);
	int ty=find_set(y);
	if(tx!=ty)
	{
		set[tx]=ty;
	}
	else
	{
		f=1;	
	}
}

int main()
{
	int a,b;
	while(1)
	{
		memset(set,0,sizeof(set));
		f=0;
		int n;
		while(~scanf("%d%d",&a,&b)&&a&&b)
		{
			if(a==-1&&b==-1)
			{
				return 0;
			}
			if(set[a]==0)
			{
				set[a]=a;
			}
			if(set[b]==0)
			{
				set[b]=b;
			}
			Union(a,b);
		}
		int cnt=0;
		for(int i=1;i<M;i++)
		{
			if(set[i]==i)
			{
				cnt++;
			}
		}
		if(cnt>1||f)
		{
			printf("No\n");
		}
		else
		{
			printf("Yes\n");
		}
	}
	return 0;
}
