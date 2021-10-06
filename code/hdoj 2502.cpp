#include <iostream>
#include <cmath>

using namespace std;

int solve(int n)
{
	if(n==1) return 1;
	else if(n==2) return 3;
	else if(n==3) return 8;
	else
	{
		int ans=0;
		for(int i=1;i<n;i++)
		{
			ans +=solve(i);
		}
		return ans+pow(2,n)-pow(2,n-1);
	}
}

int main()
{
	int T,n;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n",solve(n));
	}
	return 0;
}
