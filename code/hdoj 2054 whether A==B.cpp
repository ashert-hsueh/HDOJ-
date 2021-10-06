#include <iostream>
#include <string>

using namespace std;

void operate(string &a)
{
	int len=a.length();
	if(a.find('.')!=string::npos)
	{
		for(int i=len-1;a[i]=='0';i--)
		{
			len--;
		}
		a=a.substr(0,len);
	}
	if(a[len-1]=='.')
	{
		a=a.substr(0,len-1);
	}
}

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		operate(a);
		operate(b);
		if(a==b)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
