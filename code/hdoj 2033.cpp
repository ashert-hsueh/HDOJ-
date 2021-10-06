#include <iostream>

using namespace std;
int main()
{
	int n,ah,bh,ch,am,bm,cm,as,bs,cs;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&ah,&am,&as);
		scanf("%d%d%d",&bh,&bm,&bs);
		cs=(as+bs)%60;
		int t=(as+bs)/60;
		cm=(am+bm+t)%60;
		t=(am+bm+t)/60;
		ch=ah+bh+t;
		printf("%d %d %d\n",ch,cm,cs);
	}
	return 0;
}
