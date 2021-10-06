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
			scanf("%d%d", &V, &M);//M����ֵΪV����Ʒ 
			while(M --)
			{
				a[l++] = V;//ƽ�̼�ֵ 
				sum += V;//�����ܼ�ֵ�����ڽ�����һ���� 
			}
		}
		for(int  i = 0; i < l; ++i)
		{
			for(int j = sum / 2; j >= a[i]; --j)
//��sum/2��ʼ��Ϊ��Ҫ����ֳ����ݾ����ܽӽ��ʿ��԰���һ���������������Ϊ01�����ﱳ������Ϊsum/2Ȼ�������е���Ʒ��ѡ�Ž���������������ľ��������и�С���ǲ��� 
			{
				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
			}
		}
		printf("%d %d\n", sum - dp[sum / 2], dp[sum / 2]);
	}
	return 0;
}
