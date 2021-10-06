#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		if(n==0&&m==0)break;
		int t=n*n-4*m;
		bool flag=false;
		int z=sqrt(t);
		if(z*z==t)
		{
			flag=true;
		}
		if(flag==true)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
