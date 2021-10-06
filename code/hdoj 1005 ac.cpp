#include <iostream>

using namespace std;
#define ll long long
int F[1005];
int a,b,n;

int main()
{
	F[1]=1;
	F[2]=1;
	while(~scanf("%d%d%d",&a,&b,&n))
	{
		if(a==0&&b==0&&n==0)break;
		int k;
		for(k=3;k<1000;k++)
		{
			F[k]=(a*F[k-1]+b*F[k-2])%7;
			if(F[k]==1&&F[k-1]==1)break;
		}
		n=n%(k-2);
		F[0]=F[k-2];
		printf("%d\n",F[n]);
	}
	return 0;
}
