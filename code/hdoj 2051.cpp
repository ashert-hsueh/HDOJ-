#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		string ans="";
		if(n==0)ans="0";
		while(n)
		{
			int t=n%2;
			n=n/2;
			char m=t+'0';
			ans = m+ans;
		}
		cout<<ans<<endl;
	}
	return 0;
}
