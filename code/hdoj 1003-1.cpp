#include <iostream>
#include <vector>

using namespace std;
int a[100005];
int maxsub(int &l,int &r)
{
	int m=(l+r)/2;
	int il,ir;
	int sum;
	if(l==r)
	{
		if(a[l]>0)return a[il];
		else return 0;
	}
	else
	{
		int lSum=maxsub(l,m);
		int rSum=maxsub(m+1,r);
		sum=0;
		int l_max=0;
		il=m;
		for(int i=m;i>=l;i--)
		{
			sum +=a[i];
			ir=i;
			if(sum>l_max)
			{
				l_max=sum;
			}
		}
		sum=0;
		int r_max=0;
		for(int i=m+1;i<r;i++)
		{
			sum +=a[i];
			if(sum>r_max)
			{
				r_max=sum;
			}
		}
		sum=r_max+l_max;
		if(sum<lSum)
		{
			sum=lSum;
		}
		if(sum<rSum)
		{
			sum=rSum;
		}
	}
	return sum;
}

int main()
{
	int n,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d\n",maxsub(0,n-1));
	}
	return 0;
}
