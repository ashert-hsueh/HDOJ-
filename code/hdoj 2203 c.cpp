#include <iostream>
#include <string.h>

using namespace std;

const int maxn=100005;

char a[maxn],b[maxn],s[maxn*2];

int main()
{
	while(~scanf("%s%s",a,b))
	{
		strcpy(s,a);//copy a to s
		strcat(s,a);//move the a to the tail of s
		if(strstr(s,b)!=NULL)printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
