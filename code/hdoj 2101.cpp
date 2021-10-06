#include <iostream>

using namespace std;

int main()
{
	long long int A,B;
	while(cin>>A>>B)
	{
		if((A+B)%86==0)
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}
	return 0;
}
