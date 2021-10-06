#include <iostream>
#include <algorithm>

using namespace std;

struct doll
{
	int w;
	int h;
};

bool cmp(doll a,doll b)
{
	if(a.w!=b.w)
	{
		return a.w<b.w;
	}
	return a.h>b.h;
}

int main()
{
	int t,m;
	scanf("%d",&t);
	doll tem[20005],a[20005];
	while(t--)
	{
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d%d",&a[i].w,&a[i].h);
		}
		sort(a,a+m,cmp);
		int dolls=0;
		for(int i=0;i<m;i++)
		{
			bool f=false;
			for(int j=0;j<dolls;j++)
			{
				if((a[i].w>tem[j].w)&&(a[i].h>tem[j].h))
				{
					tem[j]=a[i];
					f=true;
					break;
				}
			}
			if(!f)
			{
				tem[dolls++]=a[i];
			}
		}
		printf("%d\n",dolls);
	}
	return 0;
}
