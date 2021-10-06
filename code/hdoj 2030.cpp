#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	scanf("%d",&n);
	cin.get();
	while(n--)
	{
		getline(cin,s);
		int cnt=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<0)
			{
				cnt++;
			}
		}
		printf("%d\n",cnt/2);
	}
	return 0;
}
