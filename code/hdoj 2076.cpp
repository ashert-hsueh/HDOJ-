#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T,h,m,s;
	double hh=30,mm=0.5,ss=1/(double)120;
	double mmm=6,sss=0.1;
	double angle1,angle2,angle;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&h,&m,&s);
		if(h>=12)h-=12;
		angle1=hh*h+m*mm+s*ss;
		angle2=m*mmm+s*sss;
		angle=fabs(angle2-angle1);
		if((int)angle>180)
		{
			angle=(360-(angle));
		}
		else if((int)angle==180)
		{
			angle=0;
		}
		printf("%d\n",(int)angle);
	}
	return 0;
}
