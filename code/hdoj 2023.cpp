#include <stdio.h>

int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		double a[50][5],sum1[50]={0};
		for(int i=0;i<n;i++)
		{
			double score;
			for(int j=0;j<m;j++)
			{
				scanf("%lf",&score);
				a[i][j]=score;
				sum1[i] +=a[i][j];
			}
		}
		double sum2[5]={0};
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum2[i] +=a[i][j];
			}
		}
		for(int i=0;i<n-1;i++)
		{
			printf("%.2lf%c",sum1[i]/n,' ');
		}
		printf("%.2lf\n",sum1[n-1]/n);
		for(int i=0;i<m-1;i++)
		{
			printf("%.2lf%c",sum2[i]/m,' ');
		}
		printf("%.2lf\n",sum2[m-1]/m);
		for(int i=0;i<m;i++)//找大于平均成绩的同学 
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]>sum2[i])
			}
		}
	}
	return 0;
}
