#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	char t;
	while(cin>>a)
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{	
				if(a[j]>a[j+1])
				{
					t=a[j],a[j]=a[j+1],a[j+1]=t;
				}
			}
		}
		for(int i=0;i<=2;i++)
		{
			if(i!=2)cout<<a[i]<<" ";
			else cout<<a[i]<<endl;
		}
	}
	return 0;
}
