#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		cin>>s;
		for(int i=0;i<s.length();i+=2)
		{
			char temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
		}
		cout<<s<<"\n";
	}
	return 0;
}
