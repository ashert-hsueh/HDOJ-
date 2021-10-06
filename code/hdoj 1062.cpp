#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001];
	int set[1001]={0};
	int T;
	while(~scanf("%d",&T))
	{
		getchar();
		for(int i=0;i<T;i++)
		{
			gets(a);
			int m=1;
			for(int j=0;j<=strlen(a);j++)
			{
				if(a[j]==' ')
				{
					set[m]=j;
					m++;
				}
			}
			int n=1;
			while(set[n])
			{
				if(n==1)
				for(int j=set[1]-1;j>=0;j--)
				{
					printf("%c",a[j]);
				}
				else
				{
					for(int j=set[n]-1;j>set[n-1];j--)
					{
						printf("%c",a[j]);
					}
				}
				if(n<=m-1)printf(" ");
				n++;
			}
			for(int j=strlen(a)-1;j>set[n-1];j--)
			{
				printf("%c",a[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
