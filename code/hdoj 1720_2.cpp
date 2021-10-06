#include <iostream>
#include <string>

using namespace std;

int h_to_d(string s);

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		cout<<h_to_d(a)+h_to_d(b)<<endl;
	}
	return 0;
}

int h_to_d(string s)
{
	int a=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			a += s[i]-'0';
		}
		else if(s[i]>='A'&&s[i]<='F')
		{
			a +=s[i]-'A'+10;
		}
		else if(s[i]>='a'&&s[i]<='f')
		{
			a +=s[i]-'a'+10;
		}
	}
	return a;
}
