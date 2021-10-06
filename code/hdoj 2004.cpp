#include <iostream>

using namespace std;

int main()
{
	int a;
	while(cin>>a)
	{
		if(a>100||a<0)
		{
			cout<<"Score is error!"<<endl;
			continue;	
		}
		int m=a/10;
		switch(m)
		{
			
			case 10:
				{
					cout<<"A"<<endl;
					break;
				}
			case 9:
				{
					cout<<"A"<<endl;
					break;
				}
			case 8:
				{
					cout<<"B"<<endl;
					break;
				}
			case 7:
				{
					cout<<"C"<<endl;
					break;
				}
			case 6:
				{
					cout<<"D"<<endl;
					break;
				}	
			default:
				{
					cout<<"E"<<endl;
					break;
				}
		}
	}
	return 0;
} 
