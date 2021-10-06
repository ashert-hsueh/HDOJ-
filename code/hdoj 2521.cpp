#include <iostream>
#include <cstring>

using namespace std;

int factor[5001];

void list() {
	memset(factor, 0, sizeof(factor));
	for (int i = 1; i <= 5000; ++i) {
		for (int j = 1; j * j <= i; ++j) {
			if (i % j == 0) {
				factor[i]++;
				if (j != i / j) {
					factor[i]++;
				}
			}
		}
	}
}

int main() {
	int n, a, b;
	scanf("%d", &n);
	list();
	while (n--) {
		scanf("%d%d", &a, &b);
		int maxx = factor[a];
		int maxi = a;
		for (int i = a + 1; i <= b; ++i) {
			if (factor[i] > maxx) {
				maxx = factor[i];
				maxi = i;
			}
		}
		printf("%d\n", maxi);
	}
	return 0;
}