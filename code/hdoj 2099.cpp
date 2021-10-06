#include <iostream>

using namespace std;

int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(a==0&&b==0)break;
		int cnt=0;
		for(int i=0;i<=99;i++)
		{
			if((a*100+i)%b==0)
			{
				if(cnt!=0)printf(" ");
				printf("%02d",i);
				cnt++;
			}
		}
		printf("\n");
	}
	return 0;
}
