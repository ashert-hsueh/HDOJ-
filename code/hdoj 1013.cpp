#include <iostream>

using namespace std;

int size_sum(int n)
{
	int cnt=0;
	while(n)
	{
		n /=10;
		cnt++;
	}
	return cnt;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		int sum=0;
		while(true)
		{
			while(n)
			{
				int t=n%10;
				n /=10;
				sum +=t;	
			}
			if(size_sum(sum)>1)
			{
				n=sum;
				sum=0;
			}
			else
			{
				break;
			}
		}
		printf("d\n",sum);
	}
	return 0;
}
