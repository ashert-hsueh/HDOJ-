#include <iostream>

using namespace std;

int h_to_d(string s);

int main()
{
	string a,b;
	while(~scanf("%d %d",&a,&b))
	{
		cout<<h_to_d(a)+h_to_d(b)<<endl;
	}
	return 0;
}

int h_to_d(string s)
{
	int a;
	enum hexadecimal {A=10,B,C,D,E,F};
	for(int i=s.length()-1;i>=0;i--)
	{
		a += s[i]-'0';
	}
	return a;
}
