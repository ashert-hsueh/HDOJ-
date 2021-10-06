#include <iostream>

using namespace std;

int main()
{
	int T;
	long long A,B;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld",&A,&B);
		if(A%B==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
