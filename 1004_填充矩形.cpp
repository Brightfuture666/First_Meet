#include <iostream>

using namespace std;

int main() {
	long n = 0, m = 0, a = 0;

	cin >> n >> m >> a;

	if (n != m) {
		cout << (m / a) * (n / a) << endl;
	}
	else {
		cout << (n / a) * (m / a) << endl;
	}

	return 0;
}