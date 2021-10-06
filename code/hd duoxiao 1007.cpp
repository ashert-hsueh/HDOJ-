#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
const ll mod=1e9+7; 

ll fast(ll a,ll n)
{
    ll base=a;
    ll ans=1;
    while(n)
    {
        if(n&1)
            ans=(ans*base+mod)%mod;
        base=(base*base+mod)%mod;
        n>>=1;
    }
    return ans;
}


int main()
{
    int T;
    ll n;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&n);
        ll ans1=0;
        ll ansp=0;
        ll anso=0;
        ll anspp=0;
        if(n>1)
        {
            anso=fast((((2+n%mod)%mod*(n%mod-1+mod)%mod)%mod*fast(2,mod-2)%mod)%mod,2)%mod;
            ansp=((((n%mod+2)%mod*(n%mod-1+mod)%mod)*fast(2,mod-2)%mod)%mod*((((n%mod)*(n%mod+1)%mod)%mod*(2*n%mod+1)%mod)*fast(6,mod-2)%mod-1+mod)%mod)%mod;
        }
        ans1=((((((((fast(1+n%mod,2)%mod*fast(n%mod,2)%mod)%mod)*((2*n%mod)%mod+1)%mod)%mod)*fast(12,mod-2)%mod)%mod+anso)%mod+ansp)%mod);
        ll ans2=0;
        ans2=(((((fast(1+n%mod,2)%mod*fast(n%mod,4)%mod)%mod)*(2*n%mod+1)%mod)%mod)*fast(12,mod-2)%mod)%mod;
        cout<<ans1<<"\n"<<ans2<<"\n";
    }
    return 0;
}
