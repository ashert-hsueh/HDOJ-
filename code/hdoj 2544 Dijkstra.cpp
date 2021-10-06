#include <iostream>
#include <string.h>

using namespace std;

const int N=101;
const int MAX=0x3f3f3f3f;
int visited[N];
int dist[N];
int time[N][N];
int n;

int Min()
{
	int k=-1;
	int min=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		if(min>dist[i]&&visited[i]==0)
		{
			min=dist[i];
			k=i;
		}
	}
	return k;
}

void Dijkstra(int a)
{
	memset(visited,0,sizeof(visited));
	for(int i=1;i<=n;i++)
	{
		dist[i]=time[a][i];
	}
	dist[a]=0;
	visited[a]=1;
	for(int i=2;i<=n;i++)
	{
		int k=Min();
		visited[k]=1;
		for(int j=1;j<=n;j++)
		{
			if(dist[j]>time[k][j]+dist[k]&&visited[j]==0)
			{
				dist[j]=dist[k]+time[k][j];
			}
		}
	}
}

int main()
{
	int m;
	while(~scanf("%d%d",&n,&m))
	{
		if(m==0&&n==0)break;
		fill(&time[0][0],&time[N-1][N-1]+1,MAX);
		//fill(&dist[0],&dist[N-1]+1,MAX);
		for(int i=0;i<m;i++)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(time[a][b]>c)
			{
				time[a][b]=c;
				time[b][a]=c;
			}
		}
		Dijkstra(1);
		printf("%d\n",dist[n]);
	}
	return 0;
}
