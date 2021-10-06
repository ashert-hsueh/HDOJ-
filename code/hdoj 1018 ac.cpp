#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long
const double PI=3.1415926;
int main()
{
	ll n,T;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&n);
		double ans=0;
		cout<<(int)((0.5*log(2.0*n*PI)+n*log(n)-n)/(log(10.0)))+1<<endl;
	}
	return 0;
}
