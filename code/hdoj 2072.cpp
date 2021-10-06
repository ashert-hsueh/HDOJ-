#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	map<string,bool>words;
	string s;
	while(getline(cin,s))
	{
		if(s=="#")break;
		stringstream ss(s);
		while(ss>>s)
		{
			words[s]=true;
		}
		int cnt=0;
		cnt=words.size();
		printf("%d\n",cnt);
		words.clear();
	}
	return 0;
}
