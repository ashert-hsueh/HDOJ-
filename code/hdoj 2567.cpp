#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	string s1, s2;
	while (n--) {
		getline(cin, s1);
		getline(cin, s2);
		string ans = s1.substr(0, s1.length() / 2);
		ans += s2 + s1.substr(s1.length() / 2, s1.length() / 2);
		cout << ans << "\n";
	}
	return 0;
}