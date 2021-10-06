#include <iostream>
#include <cmath>

using namespace std;

int yueshuhe(int a)
{
    int sum=0;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            sum +=i+a/i;
        }
    }
    sum -=a;
    return sum;
}
int main()
{
    int a,b,T;
    scanf("%d",&T);
    while(T--)
    {
		scanf("%d%d",&a,&b);
        if(a==yueshuhe(b)&&b==yueshuhe(a))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
