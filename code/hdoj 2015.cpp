#include <stdio.h>

int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int sum[100]={0};
		int a[100]={0};
		a[0]=0;
		int z=1;
		for(int j=0;j<n/m;j++)
		{
			for(int i=j;i<j+m;i++)
			{
				a[z]=a[z-1]+2;
				sum[j] +=a[z];
				z++;
			}	
		}
		if(n%m!=0)
		{
			for(int i=0;i<n%m;i++)
			{
				a[z]=a[z-1]+2;
				sum[n/m] +=a[z];
				z++;
			}
		}
		for(int i=0;i<n/m;i++)
		{
			if(i!=0)printf(" ");
			printf("%d",sum[i]/m);
		}
		if(n%m!=0)
		{
			printf(" %d",sum[n/m]/m);
		}
	}
	return 0;
}
