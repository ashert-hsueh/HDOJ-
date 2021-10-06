#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int a[1010][1010];
int b[1010][1010];

int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	a[0][0]=a[1][0]=1;
	for(int i=2;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			a[i][j]+=a[i-1][j]+a[i-1][j];//the number of 1 
			b[i][j]+=a[i-2][j]+b[i-2][j];//the number of a couple of 0
			a[i][j+1]+=a[i][j]/10000;
			a[i][j]=a[i][j]%10000;
			b[i][j+1]+=b[i][j]/10000;
			b[i][j]=b[i][j]%10000;
		}
	}
	int n;
	while(~scanf("%d",&n))
	{
		int end=99;
		while(end>0&&!b[n][end])--end;
		printf("%d",b[n][end--]);
		while(end>=0)
		{
			printf("%04d",b[n][end--]);
		}
		printf("\n");
	}
	return 0;
}
