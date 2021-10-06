#include <iostream>
#include <string>

using namespace std;
string m[88];
void init()
{
	m[11]="Beijing";
	m[21]="Liaoning";
	m[31]="Shanghai";
	m[33]="Zhejiang";
	m[54]="Tibet";
	m[71]="Taiwan";
	m[81]="Hong Kong";
	m[82]="Macao";
}

int main()
{
	init();
	int n;
	scanf("%d",&n);
	while(n--)
	{
		string a;
		cin>>a;
		int i1=a[0]-'0';
		int i2=a[1]-'0';
		int ans=i1*10+i2;
		printf("He/She is from ");
		cout<<m[ans];
		printf(",and his/her birthday is on ");
		cout<<a.substr(10,2)<<","<<a.substr(12,2)<<","<<a.substr(6,4)<<" based on the table."<<endl; 
	}
	return 0;
}
