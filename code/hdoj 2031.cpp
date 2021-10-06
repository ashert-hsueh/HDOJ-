#include <iostream>
#include <string>

using namespace std;

string conversion(int n,int k)
{
    string res="";
    bool flag=true;
    if(n<0)
    {
        n=-n;
        flag=false;
    }
    char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int t;
    if(n==0)res='0';
    while(n)
    {
        t=n%k;
        res=a[t]+res;
        n=n/k;
    }
    if(flag==false)res='-'+res;
    return res;
}

int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        cout<<conversion(n,k)<<endl; 
    }
    return 0;
}
