#include <iostream>
#include <string>

using namespace std;

string c[12]={"0","1","2","3","4","5","6","7","8","9"};
long long a[12]={1,2,3,5,7,11,13,17,19,23};

int main()
{
	long long int n;
	while(~scanf("%lld",&n)&&n)
	{
		string s="";
		int o=9;
		long long int nn=n;
		printf("n = ");
		while(n)
		{
			long long z=1;
			for(int j=o;j>=0;j--)
			{
				z*=a[j];
			}
			long long t;
			/*if(z!=1)*/t=n/z;/*
			else if(n==1&&z==1)t=1;
			else t=0;*/
			if(t>0&&o!=0)
			{
				if(s!="")
				{
					s=c[t]+b[o]+"+"+s;
				}	
				else
				{
					s=c[t]+b[o];
				}
			}
			if(t>0&&o==0)
			{
				if(s!="")s="1+"+s; 
				else s="1";
			}
			n=n-t*z;
			o--;
			if(o<0)break;
		}
		cout<<nn<<" = "<<s<<"\n";
	}
	return 0;
}
