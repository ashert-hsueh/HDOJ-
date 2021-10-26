#include <iostream>
#include <cstring>

using namespace std;

int dp[1005][1005];
int a[1005][1005];

int main() {
	int m, n, x, y, T;
	scanf("%d", &T);
	while (T--) {
		memset(a, 0, sizeof(a));
		memset(dp, 0, sizeof(dp));
		scanf("%d%d%d%d", &m, &n, &x, &y);
		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				scanf("%d", &a[i][j]);
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
			}
		}
		int temp = 0;
		int maxx = 0;
		for (int i = x; i <= m; ++i) {
			for (int j = y; j <= n; ++j) {
				temp = dp[i][j] - dp[i - x][j] - dp[i][j - y] + dp[i - x][j - y];
				if (temp > maxx) {
					maxx = temp;
				}
			}
		}
		printf("%d\n", maxx);
	}
	return 0;
}