#include <iostream>

using namespace std;

int a[1000100];
int b[1000100];

int main()
{
	int n,T;
	scanf("%d",&T);
	int T1=T;
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int ii=0,jj=0;
		int it=0;
		b[0]=a[0];
		int Max=b[0];
		for(int i=1;i<n;i++)
		{
			if(b[i-1]>=0)
			{
				b[i]=b[i-1]+a[i];
			}
			else
			{
				it=i;
				b[i]=a[i];
			}
			if(b[i]>Max)
			{
				Max=b[i];
				ii=it;
				jj=i;
			}
		}
		if(T1-T!=1)printf("\n");
		printf("Case %d:\n%d %d %d\n",T1-T,Max,ii+1,jj+1);
	}
	return 0;
}
