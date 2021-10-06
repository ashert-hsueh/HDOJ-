#include<stdio.h>
int main()
{
	int i,k,n;
	while(scanf("%d",&n)!=EOF)
	{
		k=0;
		for(i=1;i<=n;i++)
		if(n%i==0) 
		k++;
		printf("%d\n",k%2);
	}
	return 0;
}
