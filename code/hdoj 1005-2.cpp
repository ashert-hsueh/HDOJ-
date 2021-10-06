#include <iostream>
#include <string.h>

using namespace std;
int f[100];
void init()
{
	f[1]=1;
	f[2]=1;
}
int main()
{
	int n,A,B;
	while(~scanf("%d%d%d",&A,&B,&n))
	{
		memset(f,0,sizeof(f));
		init();
		int i=3;
		int mod=0;
		while(1)
		{
			f[i]=(A*f[i-1]+B*f[i-2]);
			if(f[i]>7||i==n)
			{
				f[0]=f[i-1];
				mod=i-1;
				break;
			}
			i++;
		}
		printf("%d\n",f[n%mod]);
	}
	return 0;
}
