#include <iostream>

using namespace std;

long long F[55];

void init()
{
	F[1]=1;
	F[2]=1;
	for(int i=3;i<55;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
}
int main()
{
	long long n;
	init();
	while(~scanf("%lld",&n))
	{
		if(n==-1)break;
		printf("%lld\n",F[n]);
	}
	return 0;
}
