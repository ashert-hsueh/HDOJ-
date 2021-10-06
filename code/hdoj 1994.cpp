#include <iostream>

using namespace std;

int main()
{
	int T;
	int y,q;
	double e,f,g;
	double ans;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d%d%lf%lf%lf",&y,&q,&e,&f,&g);
			ans=(y*(1+e/100*q/365))*(1+g/100);
			printf("%.1lf\n",ans);
			ans=y*(1+f/100*(q+365)/365);
			printf("%.1lf\n",ans);
		}	
	}
	return 0;
}
