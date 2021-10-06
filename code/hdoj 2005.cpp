#include <iostream>

using namespace std;

int main()
{
	int y,m,d;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30};
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			a[2]=29;
		}
		else
		{
			a[2]=28;
		}
		int days=0;
		for(int i=1;i<m;i++)
		{
			days += a[i];
		}
		days += d;
		printf("%d\n",days);
	}
	return 0;
} 
