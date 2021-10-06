#include <iostream>

using namespace std;

int col[12];
int ans[12];
int n;
int cnt;

bool Judge(int x) {
	for (int k = 1; k < x; k++) {
		//�Ƿ�ͬ�л��ڶԽ�����
		if (col[x] == col[k] || abs(x - k) == abs(col[x] - col[k])) {
			return false;
		}
	}
	return true;
}

void DFS(int s) {
	if (s > n) { //�ҵ���n+1��--->˵���ڷ����
		cnt++;
	}
	for (int i = 1; i <= n; ++i) {
		col[s] = i;//����s��i��
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