#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct square {
	int l, w, h;
} data[200];

int dp[100];

bool cmp(square a, square b) {
	if (a.l == b.l) {
		return a.w < b.w;
	}
	return a.l < b.l;
}

int main() {
	int n;
	int T = 1;
	while (~scanf("%d", &n) && n) {
		int x, y, z;
		int k = 0;
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; ++i) {
			scanf("%d%d%d", &x, &y, &z);
			/*将一个箱子视为三种规格（三个方向放置的箱子），利用排序找到最佳的排列方式*/
			data[k].h = x;
			data[k].l = y > z ? y : z;
			data[k++].w = y > z ? z : y;

			data[k].h = y;
			data[k].l = x > z ? x : z;
			data[k++].w = x > z ? z : x;

			data[k].h = z;
			data[k].l = x > y ? x : y;
			data[k++].w = x > y ? y : x;
		}
		sort(data, data + k, cmp);
		dp[0] = data[0].h;
		int maxH;
		for (int i = 1; i < k; ++i) {
			maxH = 0;
			for (int j = 0; j < i; ++j) {
				if (data[j].l < data[i].l && data[j].w < data[i].w) {
					maxH = maxH > dp[j] ? maxH : dp[j];
				}
			}
			dp[i] = data[i].h + maxH;
		}
		printf("Case %d: maximum height = %d\n", T++, *max_element(dp, dp + k));
	}
	return 0;
}