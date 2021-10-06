#include <iostream>
#include <stdio.h>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		string s;
		cin>>s;
		if(s=="FILO")
		{
			stack<int> S;
			for(int i=0;i<n;i++)
			{
				cin>>s;
				if(s=="IN")
				{
					int num;
					scanf("%d",&num);
					S.push(num);
				}
				else if(s=="OUT")
				{
					if(!S.empty())
					{
						printf("%d\n",S.top());
						S.pop();
					}
					else
					{
						printf("None\n");
					}
				}
			}
		}
		else
		{
			queue<int> Q;
			for(int i=0;i<n;i++)
			{
				cin>>s;
				if(s=="IN")
				{
					int num;
					scanf("%d",&num);
					Q.push(num);
				}
				else
				{
					if(!Q.empty())
					{
						printf("%d\n",Q.front());
						Q.pop();
					}
					else
					{
						printf("None\n");
					}
				}
			}
		}
	}
	return 0;
}
