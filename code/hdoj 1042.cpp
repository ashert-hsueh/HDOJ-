#include <iostream>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[10001]={1};
		int data=1;
		int t;
		for(int i=2;i<=n;i++)
		{
			t=0;
			for(int j=0;j<data;j++)
			{
				a[j]=a[j]*i+t;
				t=a[j]/10000;
				a[j]%=10000;
			}
			if(t)
			{
				a[data++]=t;
			}
		}
		printf("%d",a[data-1]);
		for(int i=data-2;i>=0;i--)
		{
			printf("%04d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
