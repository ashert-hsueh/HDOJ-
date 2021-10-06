#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		if(n==0&&m==0)break;
		int j=sqrt(2.0*m);
		for(j;j>=1;j--)
		{
			int i=(2*m/j+1-j)/2;
			if((2*i-1+j)*j/2==m)
			{
				printf("[%d,%d]\n",i,i+j-1);
			}
		}
		printf("\n");
	}
	return 0;
}
