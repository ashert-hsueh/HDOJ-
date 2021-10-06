/*
author: Hsueh
time:2021/9/4
algorithm:transform multiple choice knapsack problem to 0-1 knapsack problem
reference:"https://blog.csdn.net/libin56842/article/details/9034667/"
*/ 

#include <iostream>
#include <cstring>
#include <cstdio>


using namespace std;

int a[5005];
int dp[250050];

int main()
{
	int N, V, M, l, sum;
	while(~scanf("%d", &N))
	{
		if(N < 0)break;
		memset(a, 0, sizeof(a));
		memset(dp,0,sizeof(dp));
		l = 0;
		sum = 0;
		for(int i = 0; i < N; ++i)
		{
			scanf("%d%d", &V, &M);//M个价值为V的物品 
			while(M --)
			{
				a[l++] = V;//平铺价值 
				sum += V;//计算总价值，用于进行零一背包 
			}
		}
		for(int  i = 0; i < l; ++i)
		{
			for(int j = sum / 2; j >= a[i]; --j)
//从sum/2开始因为是要将其分成两份尽可能接近故可以把这一步操作的题意理解为01背包里背包总量为sum/2然后在现有的物品中选放进这个背包里，计算出的就是两份中更小的那部分 
			{
				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
			}
		}
		printf("%d %d\n", sum - dp[sum / 2], dp[sum / 2]);
	}
	return 0;
}
