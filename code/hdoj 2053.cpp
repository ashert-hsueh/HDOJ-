#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int lamp=-1;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				lamp=-lamp;
			}
		}
		if(lamp==-1)
		{
			printf("%d\n",0);
		}
		else
		{
			printf("%d\n",1);
		}
	}
	return 0;
} 
