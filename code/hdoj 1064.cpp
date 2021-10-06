#include <iostream>

using namespace std;

int main()
{
	double a,sum=0;
	while(~scanf("%lf",&a))
	{
		sum +=a;
	}
	printf("$%.2lf\n",sum/12);
	return 0;
}
