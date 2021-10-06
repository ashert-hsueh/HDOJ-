#include <iostream>

using namespace std;

long long gcd(long long a,long long b)
{
	return a==0?b:gcd(b%a,a);
}
int main()
{
	long long n,a,b=1;
	while(~scanf("%lld",&n))
	{
		b=1;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			b=(a*b)/gcd(a,b);
		}
		printf("%lld\n",b);
	}
	return 0;
}
