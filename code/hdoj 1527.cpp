#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		double q=(sqrt(5.0)+1)/2;
		if(a<b)
		{
			swap(a,b);
		}
		double c=double(a-b);
		int t=(int)(q*c);

		if(t==b)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}

	}
	return 0;
}
