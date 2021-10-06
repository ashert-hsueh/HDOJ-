#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int a[1001];

int main()
{
	string s;
	while(getline(cin,s))
	{	
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='5')
			{
				s[i]=' ';
			}
		}
		stringstream ss(s);
		int t;
		int o=0;
		while(ss>>t)
		{
			a[o++]=t;
		}
		sort(a,a+o);
		for(int i=0;i<o;i++)
		{
			if(i!=0)printf(" ");
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
