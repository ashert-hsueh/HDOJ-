#include <iostream>

using namespace std;

int main()
{
	char a;
	int n;
	int cnt=0;
	while(~scanf("%c",&a))
	{
		if(a=='@')break;
		scanf("%d",&n);
		getchar();
		if(cnt!=0)printf("\n");
		for(int i=n-1;i>0;i--)
		{
			for(int j=i;j>0;j--)
			{
				printf(" ");
			}
			printf("%c",a);
			if(i<n-1)
			{
				for(int j=2*(n-i-1)-1;j>0;j--)
				{
					printf(" ");
				}
				printf("%c",a);
			}
			printf("\n");
		}
		for(int i=n*2-1;i>0;i--)
		{
			printf("%c",a);
		}
		printf("\n");
		cnt=1;
	}
	return 0;
}
