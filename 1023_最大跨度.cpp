#include <iostream>

using namespace std;

int main() {
	int n, a[1001], max, min;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	max = a[1];
	min = a[1];

	for (int i = 2; i <= n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 2; i <= n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}

	cout << max - min << endl;

	return 0;
}