#include <iostream>
#include <queue>

using namespace std;

struct node
{
	int x,y;
	int steps;
	int time;
	friend bool operator < (node a,node b)
	{
		return a.steps>b.steps;
	}
};

int a[15][15];
int dir[4][2]={0,1,1,0,0,-1,-1,0};
node start;
int n,m;

bool bfs()
{
	priority_queue<node> q;
	q.push(start);
	while(q.size())
	{
		start=q.top();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int x=start.x+dir[i][0];
			int y=start.y+dir[i][1];
			if(x<0||y<0||x>=n||y>=m||a[x][y]==0)
			{
				continue;
			}
			node p;
			p.time=start.time+1;
			p.steps=start.steps+1;
			if(p.time>=6)continue;
			if(a[x][y]==4)
			{
				p.time=0;
				a[x][y]=0;
			}
			if(a[x][y]==3)
			{
				return true;
			}
			p.x=x;
			p.y=y;
			q.push(p);
		}
	}
	return false;
}

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%d",&a[i][j]);
				if(a[i][j]==2)
				{
					start.x=i;
					start.y=j;
					start.steps=0;
					start.time=0;
				}
			}
		}
		//cout<<start.steps<<"\n";
		if(bfs())
		{
			printf("%d\n",start.steps+1);
		}
		else
		{
			printf("-1\n");
		}
	}
	system("pause");
	return 0;
}
