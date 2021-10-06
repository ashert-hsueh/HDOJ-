#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m,n;
	
	while(cin>>m>>n)
	{
		bool flag=false;
		int cnt=0;
		for(int i=m;i<=n;i++)
		{
			if(pow(i/100,3)+pow(i%10,3)+pow(i/10%10,3)==i)
			{
				cnt++;
				if(cnt>1)
				{
					cout<<" ";
				}
				cout<<i;
				flag=true;
			}
			
		}
		if(flag==false)
		{
			cout<<"no";
		}
		cout<<endl;
	}
	return 0;
}
