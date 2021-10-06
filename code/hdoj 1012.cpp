#include <iostream>

using namespace std;

double factorial(int i)
{
	double n=1;
	for(int j=1;j<=i;j++)
	{
		n *=j;
	}
	return 1/n;
}

int main()
{
	int n;
	printf("%c %c\n",'n','e');
	printf("- -----------\n");
	double sum=0;
	for(int i=0;i<10;i++)
	{
		sum=sum+factorial(i);
		if(i<3)
			printf("%d %g\n",i,sum);
		else
		{
			printf("%d %.9lf\n",i,sum);
		}
	}
	return 0;
}
/*
#include <stdio.h>
int main()
{
printf("n e\n");
printf("- -----------\n");
printf("0 1\n");
printf("1 2\n");
printf("2 2.5\n");
int a;
double sum=2.5,fe=0.5;
for(int i=3;i<=9;i++)
{
fe=fe*(1.0/i);
sum+=fe;
printf("%d %.9lf\n",i,sum);
}
return 0;
}*/
