#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m,n,g;
	int max,x,y;
	while(~scanf("%d%d",&m,&n))
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&g);
				if(i==0&&j==0)
				{
					max=g;
					x=i;
					y=j;
				}
				else 
				{
					if(abs(max)<abs(g))
					{
						max=g;
						x=i;
						y=j;
					}
				}
			}
		}
		printf("%d %d %d\n",x+1,y+1,max);
	}
	return 0;
}
