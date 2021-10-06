#include <iostream>

using namespace std;

bool judge(int n)
{
	int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cnt+=i;
		}
	}
	if(cnt==n)return true;
	return false;
}

int main()
{
	int n,n1,n2;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&n1,&n2);
		int cnt=0;
		if(n1>n2)
		{
			swap(n1,n2);
		}
		for(int i=n1;i<=n2;i++)
		{
			if(judge(i))
			{
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
