#include <iostream>

using namespace std;

int GCD(long long n, long long m) {
	if (m == 0) {
		return n;
	}
	else {
		GCD(m, n % m);
	}
}

int main() {
	long long n, m;
	int Ans;

	cin >> n >> m;

	if (n < m) {
		swap(n, m);
	}

	if (m == 1) {
		cout << "Yes" << endl;
		return 0;
	}



	Ans = GCD(n, m);

	if (Ans == 1) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}