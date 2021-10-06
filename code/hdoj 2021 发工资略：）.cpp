#include <iostream>

using namespace std;

int main()
{
	int n;
	int money;
	
	while(~scanf("%d",&n))
	{
		int hun=0,fif=0,ten=0,five=0,two=0,one=0;
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&money);
			hun +=money/100;
			money %=100;
			fif +=money/50;
			money %=50;
			ten +=money/10;
			money %=10;
			five +=money/5;
			money %=5;
			two +=money/2;
			money %=2;
			one +=money;
		}
		printf("%d\n",hun+fif+ten+five+two+one);
	}
	return 0;
}
