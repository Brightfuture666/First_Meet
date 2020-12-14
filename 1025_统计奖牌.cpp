#include <iostream>

using namespace std;

int main() {
	int n, a[18][18], k = 0, m = 0, y = 0, Ans;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		k = k + a[i][1];
	}

	for (int i = 1; i <= n; i++) {
		m = m + a[i][2];
	}

	for (int i = 1; i <= n; i++) {
		y = y + a[i][3];
	}

	Ans = k + m + y;


	cout << k << " "<< m << " "<< y << " "<< Ans << endl;

	return 0;
}