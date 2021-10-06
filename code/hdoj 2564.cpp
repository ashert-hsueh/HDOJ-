#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int T;
	scanf("%d",&T);
	getchar();
	string s;
	while(T--)
	{
		getline(cin,s);
		stringstream ss(s);
		string t;
		string ans="";
		while(ss>>t)
		{
			char mm;
			if(t[0]>='a'&&t[0]<='z') mm=(t[0]-'a'+'A');
			else mm=t[0];
			ans=ans+mm;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
