#include <iostream>
#include <cstring>

using namespace std;

long long dp[55];

void init() {
	dp[2] = 1;
	dp[3] = 2;
	for (int j = 4; j < 55; ++j) {
		dp[j] = dp[j - 1] + dp[j - 2];
	}
}

int main() {
	int n, a, b;
	init();
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &a, &b);
		printf("%lld\n", dp[b - a + 1]);
	}
	return 0;
}