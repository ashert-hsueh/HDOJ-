#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
	string s1="";
	for(int i=0;i<s.length();i++)
	{
		s1 =s[i]+s1;
	}
	return s1;
}
int main()
{
	int n;
	string s;
	scanf("%d",&n);
	while(n--)
	{
		cin>>s;
		if(reverse(s)==s)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
