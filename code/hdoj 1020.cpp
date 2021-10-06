#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>s;
		int num=1;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==s[i+1])
			{
				num++;
			}
			else
			{
				if(num>1)
				{
					printf("%d%c",num,s[i]);
					num=1;
				}
				else
				{
					printf("%c",s[i]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
