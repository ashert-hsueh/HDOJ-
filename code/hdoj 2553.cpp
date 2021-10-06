#include <iostream>

using namespace std;

int col[12];
int ans[12];
int n;
int cnt;

bool Judge(int x) {
	for (int k = 1; k < x; k++) {
		//是否同列或在对角线上
		if (col[x] == col[k] || abs(x - k) == abs(col[x] - col[k])) {
			return false;
		}
	}
	return true;
}

void DFS(int s) {
	if (s > n) { //找到第n+1行--->说明摆放完成
		cnt++;
	}
	for (int i = 1; i <= n; ++i) {
		col[s] = i;//放在s行i列
		if (Judge(s)) {
			DFS(s + 1);
		}
	}
}

int main() {
	for (int i = 1; i <= 10; ++i) {
		n = i;
		cnt = 0;
		DFS(1);
		ans[i] = cnt;
	}
	while (~scanf("%d", &n) && n) {
		printf("%d\n", ans[n]);
	}
	return 0;
}