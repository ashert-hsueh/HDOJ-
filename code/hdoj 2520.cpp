#include <iostream>

using namespace std;

int a[100010];
int ans[100010];
void init()
{
	a[1]=1;
	ans[1]=1;
	for(int i=2;i<=100010;i++)
	{
		a[i]=a[i-1]+2;
		ans[i]=(ans[i-1]+a[i])%10000;
	}
}

int main()
{
	int T,n;
	scanf("%d",&T);
	init();
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}
	return 0;
}
