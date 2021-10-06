#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}

int main()
{
	int a,b,c,d;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int f=b*d;
		int e=a*d+b*c;
		int t=gcd(f,e);
		//cout<<f<<e<<endl;
		printf("%d %d\n",e/t,f/t);
	}
	
	return 0;
}

