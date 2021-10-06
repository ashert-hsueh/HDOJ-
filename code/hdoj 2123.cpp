#include <iostream>

using namespace std;

int main() 
{
	int n,c;
	scanf("%d",&c);
	while(c--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j!=1)printf(" ");
				printf("%d",i*j);
			}
			printf("\n");
		}
	}
	return 0;
}
