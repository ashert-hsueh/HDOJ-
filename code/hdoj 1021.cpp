#include <iostream>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int ans=n%8;
		if(ans==2||ans==6)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
