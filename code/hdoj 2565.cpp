#include <iostream>

using namespace std;

int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0;i<(n+1)/2;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				if(i==j||i==n-j-1)
				{
					printf("X");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		for(int i=n/2-1;i>=0;i--)
		{
			for(int j=0;j<n-i;j++)
			{
				if(i==j||i==n-j-1)
				{
					printf("X");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
