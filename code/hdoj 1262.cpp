#include <iostream>
#include <cmath>
#include <string.h>
#define maxn 10010

using namespace std;

int prim[maxn];

void Prime()
{
	memset(prim,1,sizeof(prim));
	for(int i=2;i<maxn;i++)
	{
		for(int j=i*i;j<maxn;j+=i)
		{
			prim[j]=0;
		}
	}
}


int main()
{
	int m;
	Prime();
	while(~scanf("%d",&m))
	{
		for(int i=m/2;i>=2;i--)
		{
			if(prim[i]&&prim[m-i])
			{
				printf("%d %d\n",i,m-i);
				break;
			}
		}
	}
	return 0;
}
