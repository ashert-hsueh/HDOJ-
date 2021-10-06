#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int M,N;
	scanf("%d",&M);
	while(M--)
	{
		scanf("%d",&N);
		vector<int>a(N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a.begin(),a.end());
		int sum=0;
		int mid=a[(N-1)/2];
		for(int i=0;i<N;i++)
		{
			sum+=abs(a[i]-mid);
		}
		printf("%d\n",sum);
	}
	return 0;
}
