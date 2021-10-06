#include <iostream>

#define ll long long

using namespace std;

const ll mod=1e9+7;

ll a[10010];

ll fast(ll n, ll a)
{
	ll base = a;
	ll ans = 1;
	while(n)
	{
		if(n & 1)
		{
			ans = (ans * base) % mod;
		}
		base = (base * base) % mod;
		n >>= 1;
	}
	return ans;
}

int main()
{
	ll T, n, t, k;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld%lld%lld", &n, &t, &k);
		for(int i = 1; i <= n; ++ i)
		{
			scanf("%lld", &a[i]);
		}
		ll p = n - (t % n);
		for(int i = 1; i <= n; ++ i)
		{
			ll pow = (p + i - 1) % n + 1;
			if(i != 1) printf(" ");
			printf("%lld", ((a[pow] % mod) * (fast(t, k) % mod)) % mod);
		}
		printf("\n");
	}
	return 0;
}
