#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ll long long

vector<char> s;

void run(ll n)
{
	s.clear();
	s.push_back('1');
	for(int i=1;i<=n;i++)
	{
		int f=0;
		for(int j=0;j<s.size();j++)
		{
			if(i==1&&j==0)
			{
				continue;
			}
			else
			{
				int t=s[j]-'0';
				s[j]=(f+i*t)%10+'0';
				f=(f+t*i)/10;
			}
		}
		while(f)
		{
			s.push_back(f%10+'0');
			f=f/10;
		}
	}
	printf("%lld\n",s.size());
}

int main()
{
	ll n,T;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&n);
		run(n);
	}
	return 0;
}
