#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int len;
	while(cin>>s)
	{
		len=s.length();
		char max=s[0];
		for(int i=1;i<len;i++)
		{
			if(s[i]>max)
			{
				max=s[i];
			}
		}
		string s2="";
		for(int i=0;i<len;i++)
		{
			if(s[i]==max)
			{
				s2 =s2 + s[i] + "(max)";
			}
			else
			{
				s2 +=s[i];
			}
		}
		cout<<s2<<endl;
	}
	return 0;
}
