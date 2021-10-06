#include <iostream>

using namespace std;

double a[3005];
double c[3005];

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		double ans=0;
		scanf("%lf%lf",&a[0],&a[n+1]);
		for(int i=1;i<=n;i++)
		{
			scanf("%lf",&c[i]);
		}
		for(int i=n;i>=1;i--)
		{
			ans +=i*c[n-i+1];
		}
		printf("%.2lf\n",(n*a[0]+a[n+1]-ans*2)/(n+1));
	}
	return 0;
}
