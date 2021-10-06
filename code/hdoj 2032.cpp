#include <iostream>
#include <string.h>
using namespace std;

int a[31][31];

void init()
{
	//memset(a,1,sizeof(a));
	for(int i=0;i<31;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
		for(int j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
}
int main()
{
	int n;
	init();
	int t=0;
	while(~scanf("%d",&n))
	{
		//if(t!=0)
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][i]);
		}
		printf("\n");
		//t++;
	}
	return 0;
}
