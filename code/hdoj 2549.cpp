#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string a;
		cin>>a;
		long long pos=a.find('.');
		int n;
		scanf("%d",&n);
		if(pos+n>=a.length())printf("0\n");
		else
		{
			printf("%c\n",a[pos+n]);
		}
	}
	return 0;
}

