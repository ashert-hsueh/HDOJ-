#include <iostream>

using namespace std;

int main()
{
	int T,n,m;
	char a;
	scanf("%d",&T);
	while(T--)
	{
		getchar();
		scanf("%c%d",&a,&n);
		if(a>='A'&&a<='Z')
		{
			m=a-'A'+1;
		}
		else
		{
			m=-(a-'a'+1);
		}
		printf("%d\n",m+n);
	}
	return 0;
}
