#include <iostream>
#include <bitset>

using namespace std;

bitset<1010> a[20];
bitset<1010> ans;

const int MAXN = 1e6 + 20;

int n, x, y;
char str[5 * MAXN];

int main() {
	int T;
	while (~scanf("%d", &T)) {
		for (int i = 0; i <= 10; ++i) {
			a[i].reset();
		}
		ans.reset();
		for (int i = 1; i <= T; ++i) {
			scanf("%d", &x);
			for (int j = 1; j <= x; ++j) {
				scanf("%d", &y);
				a[y].set(i - 1);
			}
		}
		scanf("%s", str);
		int len = strlen(str);
		for (int i = 0; i < len; ++i) {
			ans = ans << 1;
			ans[0] = 1;
			ans &= a[str[i] - '0'];
			if (ans[T - 1] == 1) {
				char temp = str[i + 1];
				str[i + 1] = '\0';
				puts(str + i - T + 1);
				str[i + 1] = temp;
			}
		}
	}
	return 0;
}