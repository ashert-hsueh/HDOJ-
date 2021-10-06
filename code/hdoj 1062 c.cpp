#include <stdio.h>
#include <string.h>

int main()
{
	int T,f,k;
	char s[1005];
	scanf("%d",&T);
    getchar();
	for(int i=0;i<T;i++)
	{
		gets(s);
		f=strlen(s);
		for(int j=0;j<=f;j++)
		{
			if(s[j]==' '||j==f)
			{
				for(int m=j-1;m>=0&&m!=k;m--)
				{
					putchar(s[m]);	
				}
					k=j;
					if(j!=f)
					{
						putchar(' ');
					}
			}
		}
		printf("\n");
	}
	return 0;
}
