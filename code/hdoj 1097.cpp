#include <iostream>

using namespace std;

int main()
{
	int n,m,T;
	//scanf("%d",&T);
	while(~scanf("%d%d",&n,&m))
	{
		int t=n%10;
		//cout<<t<<endl;
		n=t;
		t=(m-1)%4+1;
		//cout<<t<<endl;
		int a[5];
		a[0]=n;
		a[1]=(n)%10;
		a[2]=(n*n)%10;
		a[3]=(n*n*n)%10;
		a[4]=(n*n*n*n)%10;
		int sum=a[t];
		cout<<sum<<endl;
		//printf("%lld\n",&sum);
	}
	return 0;
}
