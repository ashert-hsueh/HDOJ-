#include <iostream>

using namespace std;
string a[16]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n==0)break;
		//cout<<n/1000+(n/100)%10+(n/10)%10+n%10<<" "<<n/4096+(n/256)%16+(n/16)%16+n%16<<" "<<n/1728+(n/144)%12+(n/12)%12+n%12<<endl;
		if(n/1000+(n/100)%10+(n/10)%10+n%10==(n/4096+(n/256)%16+(n/16)%16+n%16)&&(n/4096+(n/256)%16+(n/16)%16+n%16)==(n/1728+(n/144)%12+(n/12)%12+n%12))
		{
			printf("%d is a Sky Number.\n",n);
		}
		else
		{
			printf("%d is not a Sky Number.\n",n);
		}
	}
	return 0;
}
