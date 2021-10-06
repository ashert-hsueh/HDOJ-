#include <iostream>

using namespace std;

char m[25][25];
int dir[4][2]={0,1,-1,0,0,-1,1,0};
int wide,hight;
int cnt=0;

void dfs(int x,int y)
{
	cnt++;
	m[x][y]='#';
	for(int i=0;i<4;i++)
	{
		int nextx=x+dir[i][0];
		int nexty=y+dir[i][1];
		if(m[nextx][nexty]=='.'&&nextx>=0&&nexty>=0&&nextx<hight&&nexty<wide)
		{
			dfs(nextx,nexty);
		}
	}
}


int main()
{
	int x,y;
	while(~scanf("%d%d",&wide,&hight))
	{
		cnt=0;
		if(wide==0&&hight==0)
		{
			break;
		}
		for(int i=0;i<hight;i++)
		{
			for(int j=0;j<wide;j++)
			{
				cin>>m[i][j];	
				if(m[i][j]=='@')
				{
					x=i;
					y=j;
				}
			}
		}
		dfs(x,y);
		printf("%d\n",cnt);
	}
	return 0;
}
