#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>

using namespace std;

int dp[1001][1001];

int main() {
	int r, c, T;
	scanf("%d", &T);
	for (int k = 1; k <= T; ++k) {
		scanf("%d%d", &r, &c);
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= r; ++i) { //input
			for (int j = 1; j <= c; ++j) {
				scanf("%d", &dp[i][j]);
			}
		}
		for (int i = 1; i <= r; ++i) {
			for (int j = 1; j <= c; ++j) {
				dp[i][j] += max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		printf("Scenario #%d:\n%d\n\n", k, dp[r][c]);
	}
	return 0;
}