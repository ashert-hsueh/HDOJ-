#include <iostream>

using namespace std;

int main()
{
	int t;
	int n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		printf("%d\n",n*(n+1)/2*m*(m+1)/2);
	}
	return 0;
}
