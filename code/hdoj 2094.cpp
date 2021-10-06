#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		map<string,int>a;
		a.clear();
		string name1,name2;
		for(int i=0;i<n;i++)
		{
			cin>>name1>>name2;
			if(a[name1]!=-1)
			{
				a[name1]=1;
				a[name2]=-1;
			}
			else if(a[name1]==-1)
			{
				a[name1]=-1;
				a[name2]=-1;
			}
		}
		int cnt=0;
		for(map<string,int>::iterator it=a.begin();it!=a.end();it++)
		{
			if(it->second>0)
			{
				cnt++;
			}
		}
		if(cnt==1)printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
