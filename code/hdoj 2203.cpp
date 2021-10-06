#include <iostream>
#include <string>

using namespace std;

void change(string &s)
{
	string ss=s;
	s=ss.substr(1)+s[0];
}

int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		int cnt=0;
		while(true)
		{
			if(s1.find(s2)!=s1.npos)
			{
				printf("yes\n");
				break;
			}
			else
			{
				if(cnt==s1.length())
				{
					printf("no\n");
					break;
				}
				change(s1);
				cnt++;
			}
		}
	}
	return 0;
} 
