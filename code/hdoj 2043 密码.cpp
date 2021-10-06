#include <iostream>
#include <string>

using namespace std;

int main()
{
	int m;
	scanf("%d",&m);
	string s;
	while(m--)
	{
		cin>>s; 
		if(s.length()<8||s.length()>16)
		{
			printf("NO\n");
			continue;
		}
		int f[4]={0};
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<='9'&&s[i]>='0')
			{
				f[0]=1;
			}
			else if(s[i]<='z'&&s[i]>='a')
			{
				f[1]=1;
			}
			else if(s[i]<='Z'&&s[i]>='A')
			{
				f[2]=1;
			}
			else if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')
			{
				f[3]=1;
			}
		}
		int sum=0;
		for(int i=0;i<4;i++)
		{
			sum +=f[i];
		}
		if(sum>=3)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
