#include <iostream>
#include <stdio.h>

using namespace std;

char s[1000];

int main()
{
	while(~scanf("%s",s)&&s[0]!='0')
	{
		int m=0;
		for(int i=0;s[i];i++)
		{
			m+=s[i]-'0';	
		}
		printf("%d\n",m%9==0?9:m%9);
	}
	return 0;
}
