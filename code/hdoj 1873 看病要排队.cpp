#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

struct P
{
	int level;
	int num;
	friend bool operator < (const P &a,const P b)
	{
		return a.level<b.level||(a.level==b.level&&a.num>b.num);
	}
};

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		priority_queue<P> Q[4];
		int k=1;
		for(int i=0;i<n;i++)
		{
			string s;
			
			cin>>s;
			int Dr;
			scanf("%d",&Dr);
			if(s=="IN")
			{
				P Person;
				scanf("%d",&Person.level);
				Person.num=k++;
				Q[Dr].push(Person);
			}
			else
			{
				if(Q[Dr].empty())
				{
					printf("EMPTY\n");
				}
				else
				{
					printf("%d\n",Q[Dr].top().num);
					Q[Dr].pop();
				}
			}
		}
	}
	return 0;
}
