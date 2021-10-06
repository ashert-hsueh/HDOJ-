#include <iostream>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n==0)
		{
			break;
		}
		int init=0;
		int cnt=0;
		int q;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&q);
			if(init<q)
			{
				cnt=cnt+(q-init)*6;
			}
			else
			{
				cnt=cnt+(init-q)*4;
			}
			cnt+=5;
			init=q;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
