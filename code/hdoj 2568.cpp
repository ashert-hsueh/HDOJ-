#include <iostream>

using namespace std;

int main() {
	int c, n;
	scanf("%d", &c);
	while (c--) {
		scanf("%d", &n);
		int cnt = 0;
		while (n) {
			if (n % 2 == 0) {
				n /= 2;
			} else {
				n--;
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}