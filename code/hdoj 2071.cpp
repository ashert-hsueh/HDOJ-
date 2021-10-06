#include <iostream>

using namespace std;

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		double max=0,height;
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&height);
			if(height>max)
			{
				max=height;
			}
		}
		printf("%.2lf\n",max);
	}
	return 0;
}
