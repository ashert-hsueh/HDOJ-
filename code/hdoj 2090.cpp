#include <iostream>
#include <string>

using namespace std;

int main()
{
	double num,price,result=0;
	string s;
	while(cin>>s>>num>>price)
	{
		result +=num*price;
	}
	printf("%.1lf\n",result);
	return 0;
}
