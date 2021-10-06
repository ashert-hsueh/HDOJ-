#include <iostream>

using namespace std;

long long a[55];

void get()
{
	a[1]=3;
	a[2]=6;
	a[3]=6;
	for(int i=4;i<55;i++)
	{
		a[i]=a[i-2]*2+a[i-1];
	}
}

int main()
{
	int n;
	get();
	while(~scanf("%d",&n))
	{
		printf("%lld\n",a[n]);
	}
	return 0;
}
