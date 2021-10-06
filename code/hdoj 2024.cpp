#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	while(~scanf("%d",&n))
	{
		getchar();
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			bool f=false;
			if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
			{
				f=true;
			}
			for(int i=0;i<s.length();i++)
			{
				if(!((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'))
				{
					f=false;
					break;
				}
			}
			if(f==true)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}
