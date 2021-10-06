#include <iostream>
#include <string>

using namespace std;

struct A
{
	char d;
	int cnt;
}a[6];

int main()
{
	string s1,s2;
	while(getline(cin,s1))
	{
		if(s1=="#")
		{
			break;
		}
		getline(cin,s2);
		for(int i=0;i<s1.length();i++)
		{
			a[i].d=s1[i];
			a[i].cnt=0;
		}
		for(int i=0;i<s2.length();i++)
		{
			for(int j=0;j<s1.length();j++)
			{
				if(s2[i]==a[j].d)
				{
					a[j].cnt++;
				}
			}
		}
		for(int i=0;i<s1.length();i++)
		{
			printf("%c %d\n",a[i].d,a[i].cnt);
		}
	}
	return 0;
}
