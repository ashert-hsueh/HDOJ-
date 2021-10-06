#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		map<string,int>balloon;
		balloon.clear();
		for(int i=0;i<n;i++)
		{
			cin>>s;
			balloon[s]++;
		}
		map<string,int>::iterator its=balloon.begin();
		for(map<string,int>::iterator it=balloon.begin();it!=balloon.end();it++)
		{
			if(its->second<it->second)
			{
				its=it;
			}
		}
		cout<<its->first<<endl;
	}
	return 0;
}
