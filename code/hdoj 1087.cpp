#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	long long a[1005];
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		long long t[1005];
		t[0]=a[0];
		long long ans=a[0];
		for(int i=1;i<n;i++)
		{
			t[i]=a[i];
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i]&&t[j]+a[i]>t[i])
				{
					t[i]=t[j]+a[i];
				}
			}
			if(ans<t[i])
			{
				ans=t[i];
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
