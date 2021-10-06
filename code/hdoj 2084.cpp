#include <iostream>

using namespace std;

int s[100][100];

int dptower(int n)
{
	int i,j;
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			if(s[i+1][j]>s[i+1][j+1])
			{
				s[i][j] +=s[i+1][j];
			}
			else
			{
				s[i][j] +=s[i+1][j+1];
			}
		}
	}
	return s[0][0];
}


int main()
{
	int T;
	
	scanf("%d",&T);
	while(T--)
	{
		int n; 
		scanf("%d",&n);
		for(int i=0;i<n;i++)//input
		{
			for(int j=0;j<=i;j++)
			{
				scanf("%d",&s[i][j]);
			}
		}
		printf("%d\n",dptower(n));
	}
	return 0;
}
