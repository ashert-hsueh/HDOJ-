#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int n,a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		for(int j=b+1;;j++)
		{
			if(a%b==0&&j%b==0)
			{
				if(gcd(a,j)==b)
				{
					printf("%d\n",j);
					break;
				}
			}
		}
	}
	return 0;
}
