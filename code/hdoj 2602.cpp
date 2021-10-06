#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Bone
{
	int val;
	int vol;
}bone[1001];
int N,V;
int dp[1001][1001];
int ans()
{
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<=V;j++)
		{
			if(bone[i].vol>j)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-bone[i].vol]+bone[i].val);
			}
		}
	}
	return dp[N][V];
}
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		cin>>N>>V;
		for(int j=1;j<=N;j++)cin>>bone[j].val;
		for(int j=1;j<=N;j++)cin>>bone[j].vol;
		cout<<ans()<<endl;
	}
	return 0;
}
