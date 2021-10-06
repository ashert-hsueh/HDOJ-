#include <iostream>
#include <string.h>

using namespace std;

int prime[10001];

void getprime()
{
	memset(prime,0,sizeof(prime));
	for(int i=2;i<=10000;i++)
	{
		if(!prime[i])
		{
			for(int j=2*i;j<=10000;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}

int main()
{
	int n;
	getprime();
	while(~scanf("%d",&n)&&n)
	{
		int cnt=0;
		for(int i=2;i+i<n;i++)
		{
			if((!prime[n-i])&&(!prime[i]))cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
