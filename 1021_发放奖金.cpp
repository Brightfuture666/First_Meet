#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double I, Cmp;

	cin >> I;

	cout << fixed << setprecision(3);

	if (I <= 100000) {
		Cmp = I * 0.1;
		cout << Cmp << endl;
	}
	else if (I > 100000 && I <= 200000) {
		Cmp = 10000 + (I - 100000) * 0.075;
		cout << Cmp << endl;
	}
	else if (I > 200000 && I <= 400000) {
		Cmp = 17500 + (I - 200000) * 0.05;
		cout << Cmp << endl;
	}
	else if (I > 400000 && I <= 600000) {
		Cmp = 27500 + (I - 400000) * 0.03;
		cout << Cmp << endl;
	}
	else if (I > 600000 && I <= 1000000) {
		Cmp = 33500 + (I - 600000) * 0.015;
		cout << Cmp << endl;
	}
	else {
		Cmp = 39500 + (I - 1000000) * 0.01;
		cout << Cmp << endl;
	}

	return 0;
}