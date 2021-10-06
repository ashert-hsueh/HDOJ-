#include <iostream>

using namespace std;

int main()
{
	int n,m;
	while(~scanf("%d%d",&m,&n))
	{
		if(m<=n)
		{
			for(int i=m;i<n;i++)
			{
				printf("%d ",i);
			}
			printf("%d\n",n);
		}
		else
		{
			if(m%(n+1)==0)
			{
				printf("none\n");
			}
			else
			{
				bool f=1;
				for(int j=1;j<=n;j++)
				{
					if((m-j)%(n+1)==0)
					{
						if(f)
						{
							printf("%d",j);
							f=0;
						}
						else
						{
							printf(" %d",j);
						}
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}
