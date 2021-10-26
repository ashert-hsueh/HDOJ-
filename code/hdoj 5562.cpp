#include <iostream>
#include <algorithm>

using namespace std;

int vol[100100];

int main() {
	int T, n, V;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &n, &V);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &vol[i]);
		}
		int cnt = 0;
		int left = V;
		sort(vol, vol + n);
		for (int i = 0; i < n; ++i) {
			if (left > vol[i]) {
				left -= vol[i];
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}