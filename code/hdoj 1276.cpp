#include <iostream>
#include <list>
#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int N;
		scanf("%d",&N);
		list<int> L;
		list<int>::iterator it;
		int k=2;
		for(int i=1;i<=N;i++)
		{
			L.push_back(i);
		}
		while(L.size()>3)
		{
			int num=1;
			for(it=L.begin();it!=L.end();)
			{
				if(num % k==0)
				{
					it=L.erase(it);
				}
				else
				{
					it++;
				}
				num++; 
			}
			k==2 ? k=3 : k=2;
		}
		for(it=L.begin();it!=L.end();it++)
		{
			if(it!=L.begin())
			{
				printf(" ");
			}
			printf("%d",*it);
		}
		printf("\n");
	}
	return 0;
}
