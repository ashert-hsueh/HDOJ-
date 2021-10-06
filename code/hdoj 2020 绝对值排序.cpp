#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(int n,int m)
{
	return abs(n)>abs(m);
}
int main()
{
	int n;
	int a[105];
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		for(int i=0;i<n;i++)//input
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++)
		{
			if(i!=0)printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
