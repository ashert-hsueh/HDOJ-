#include <iostream>

using namespace std;

bool a[22];

void init()
{
	for(int i=0;i<22;i++)
	{
		a[i]=false;
	}
}

int main()
{
	int d,n;
	scanf("%d",&d);
	while(d--)
	{
		scanf("%d",&n);
		init();
		int o=0;
		while(n)
		{
			int t=n%2;
			if(t>0)
			{
				a[o]=true;
			}
			o++;
			n=n/2;
		}
		int z=0;
		for(int i=0;i<o;i++)
		{
			if(a[i]==true)
			{
				if(z!=0)printf(" ");
				printf("%d",i);
				z++;
			}
		}
		printf("\n");
	}
	return 0;
}
