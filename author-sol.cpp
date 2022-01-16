#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		// view the image in this repository for better understanding
		// => (a * m), b, c
		int m = (2 * b - c);
		if (m > 0 && m % a == 0) {
			cout << "YES" << '\n';
			continue;
		}
		
		// => a, (b * m), c
		m = (c + a);
		if (m > 0 && m % (2 * b) == 0) {
			cout << "YES" << '\n';
			continue;
		}
		
		// => a, b, (c * m)
		m = (2 * b - a);
		if (m > 0 && m % c == 0) {
			cout << "YES" << '\n';
			continue;
		}
		cout << "NO" << '\n';
	}
	return 0;
}
