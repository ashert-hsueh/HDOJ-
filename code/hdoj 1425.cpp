#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a;

int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=0;i<n;i++)
		{
			int t;
			scanf("%d",&t);
			a.push_back(t);
		}
		sort(a.begin(),a.end());
		for(int j=n-1;j>=n-m;j--)
		{
			if(j!=n-1)printf(" ");
			printf("%d",a[j]);
		}
		printf("\n");
		a.clear();
	}
	return 0;
}
