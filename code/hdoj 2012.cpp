#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
		{
			break;
		}
		bool flag=true;
		for(int i=x;i<=y;i++)
		{
			int m=i*i+i+41;
			for(int j=2;j<=sqrt(m);j++)
			{
				if(m%j==0)
				{
					flag=false;
					break;
				}
			}
			if(flag==false)
			{
				break;
			}
		}
		if(flag==true)
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<"Sorry"<<endl;
		}
	}
	return 0;
}
