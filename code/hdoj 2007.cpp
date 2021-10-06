#include <iostream>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int sum_square=0;
		int sum_cube=0;
		if(a>b)
		{
			swap(a,b);	
		}
		for(int i=a;i<=b;i++)
		{
			if(i%2==0)
			{
				sum_square += i*i;
			}
			else
			{
				sum_cube += i*i*i;
			}
		}
		cout<<sum_square<<" "<<sum_cube<<endl;
	}
	return 0;
}
