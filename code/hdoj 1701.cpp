#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	double p,q;
	for(int i=0;i<n;i++)
	{
		scanf("%lf%lf",&p,&q);
		int j;
		for(j=1;;j++)
		{
			if((int)(j*q)/100>(int)(j*p)/100)
			{
				break;
			}
		}
		printf("%d\n",j);
	}
	return 0;
}
