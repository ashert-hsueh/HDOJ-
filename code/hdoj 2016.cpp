#include <iostream>

using namespace std;

int main()
{
	int n,a[100];
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		int min;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i==0)min=0;
			if(a[i]<a[min])min=i;
		}
		if(min!=0)swap(a[min],a[0]);
		for(int i=0;i<n;i++)
		{
			if(i!=0)
				printf(" ");
			
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
