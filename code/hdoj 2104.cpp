#include <iostream>

using namespace std;

int main()
{
	int N,M;
	while(~scanf("%d%d",&N,&M))
	{
		if(N==-1&&M==-1)break;
		while(M)
		{
			int temp=M;
			M=N%M;
			N=temp;
		}
		if(N==1)printf("YES\n");
		else printf("POOR Haha\n");
	}
	return 0;
}
