#include <iostream>
#include <iomanip>

using namespace std;

float cross(int a,int b,int c,int d)
{
	return (float)a*d-b*c;
}

int main()
{
	int n,i,pos[200],temp;
	float area;
	while((~scanf("%d",&n))&&n)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&pos[2*i],&pos[2*i+1]);
		}
		area=0;
		for(int i=2;i<n;i++)
		{
			temp=2*(i-1);
			area=area+(cross(pos[0],pos[1],pos[temp],pos[temp+1])+cross(pos[temp],pos[temp+1],pos[temp+2],pos[temp+3])+cross(pos[temp+2],pos[temp+3],pos[0],pos[1]))/2;
		}
		printf("%.1f\n",area);
	}
	return 0;
}
