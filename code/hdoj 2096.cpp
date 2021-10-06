#include <iostream>

using namespace std;

int main()
{
	int T,a,b;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&a,&b);
		a=a%100;
		b=b%100;
		printf("%d\n",(a+b)%100);
	}
	return 0;
}
