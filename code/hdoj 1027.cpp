#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];

int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		int b=1;
		do
		{
			if(b==m)break;
			b++;
		}while(next_permutation(a+1,a+n+1));
		
		for(int i=1;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}
