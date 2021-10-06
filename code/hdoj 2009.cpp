#include <stdio.h>
#include <math.h>

int main()
{
	int m;
	double n;
	while(scanf("%lf %d",&n,&m)!=EOF)
	{
		double sum=0;
		for(int i=1;i<=m;i++)
		{
			sum += n;
			n=sqrt(n);
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
