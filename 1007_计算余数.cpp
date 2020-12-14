#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a, b, r;
	int k;

	cin >> a >> b;

	k = int(a / b);
	r = a - k * b;

	cout << fixed << setprecision(2) << r << endl;

	return 0;
}