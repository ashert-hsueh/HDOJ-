#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int cnt=0;
			cin>>s;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]>='0'&&s[i]<='9')
				{
					cnt++;
				}
			}
			printf("%d\n",cnt);
		}
	}
	return 0;
}
