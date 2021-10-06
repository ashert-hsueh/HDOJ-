#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int T;
	cin>>T;
	cin.get();
	for(int i=0;i<T;i++)
	{
		getline(cin,s);
		int k=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]==' ')
			{
				for(int m=j-1;m>=k;m--)
				{
					cout<<s[m];
				}
				k=j+1;
				cout<<" ";
			}
			else if(j==s.length()-1)
			{
				for(int m=j;m>=k;m--)
				{
					cout<<s[m];
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
