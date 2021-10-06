#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		double d;
		int positive=0,negative=0,zero=0;
		for(int i=0;i<n;i++)
		{
			cin>>d;
			if(d>0)
			{
				positive += 1;
			}
			else if(d<0)
			{
				negative += 1;
			}
			else
			{
				zero +=1;
			}
		}
		cout<<negative<<" "<<zero<<" "<<positive<<endl;
	}
	return 0;
}
