#include <iostream>
#include <string>
#include <string.h>
#define ll long long

using namespace std;

const int N=100005;

int Hash[N],k;

bool judge()
{
	for(int i=0;i<26;i++)
	{
		if(Hash[i]>k)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int T;
	string s;
	scanf("%d",&T);
	while(T--)
	{
		cin>>s;
		scanf("%d",&k);
		memset(Hash,0,sizeof(Hash));
		int l=0,r=0;
		ll cnt=0;
		while(r<s.length())
		{
			Hash[s[r]-'a']++;
			while(l<s.length()&&!judge())
			{
				Hash[s[l]-'a']--;
				l++;
			}
			if(!judge())
			{
				break;
			}
			cnt= cnt+(r-l+1);
			r++;
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
