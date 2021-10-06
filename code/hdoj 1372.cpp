#include <iostream>
#include <queue>
#include <string>
#include <string.h>

using namespace std;

int dirx[8]={-2,-2,-1,1,2,2,-1,1};
int diry[8]={-1,1,-2,-2,-1,1,2,2};

struct node
{
	int x,y;
	int steps;
};
int vis[9][9];
void BFS(node a,node b)
{
	memset(vis,0,sizeof(vis));
	queue<node>Q;
	a.steps=0;
	Q.push(a);
	vis[a.x][a.y]=1;
	while(Q.size())
	{
		node t=Q.front();
		Q.pop();
		if(t.x==b.x&&t.y==b.y)
		{
			printf("To get from %c%d to %c%d takes %d knight moves.\n",a.x-1+'a',a.y,b.x-1+'a',b.y,t.steps);
			return;
		}
		for(int i=0;i<8;i++)
		{
			node next;
			next.x=t.x+dirx[i];
			next.y=t.y+diry[i];
			//cout<<next.x<<"kjdfge"<<next.y<<"\n";
			next.steps=t.steps+1;
			if(next.x>=1&&next.x<=8&&next.y>=1&&next.y<=8&&!vis[next.x][next.y])
			{
				//cout<<t.x<<"  "<<t.y<<"\n";
				vis[next.x][next.y]=1;
				Q.push(next);
				if(next.x==b.x&&next.y==b.y)
				{
					printf("To get from %c%d to %c%d takes %d knight moves.\n",a.x-1+'a',a.y,b.x-1+'a',b.y,next.steps);
					return;
				}
			}
		}
	}
}


int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		node aa;
		aa.x=a[0]-'a'+1;;
		aa.y=a[1]-'0';
		node bb;
		bb.x=b[0]-'a'+1;
		bb.y=b[1]-'0';
		BFS(aa,bb);
	}
	return 0;
}
