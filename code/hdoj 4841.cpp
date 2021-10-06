#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n,m;
	char s[32768];
	int o=0;
	while(~scanf("%d%d",&n,&m))
	{
		memset(s,0,sizeof(s));
		int set[32768]={0};
		int i=0;
		int count=0;
		int cnt=0;
		while(count!=n)
		{
			if(set[i]==0)
			{
				cnt++;
			}
			if(cnt==m)
			{
				set[i]=1;
				s[i]='B';
				cnt=0;
				count++;
			}
			i=(i+1)%(2*n);
		}
		for(int i=0;i<2*n;i++)
		{
			if(set[i]==0)
			{
				s[i]='G';
			}
		}
		//if(o!=0)printf("\n\n");
		for(int i=0;i<2*n;i++)
		{
			cout<<s[i];
			if((i+1)%50==0)
			printf("\n");
		}
		o++;
		printf("\n\n");
	}
	return 0;
}
