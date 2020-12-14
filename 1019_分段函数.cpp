#include <iostream>
#include <iomanip>

using namespace std;

float x;

void Function(float x) {
	float Cmp;

	cout << fixed << setprecision(3);

	if (x >= 0 && x < 5) {
		Cmp = x + 2.5;
		cout << Cmp << endl;
	}
	else if (x >= 5 && x < 10) {
		Cmp = 2 - 1.5 * (x - 3) * (x - 3);
		cout << Cmp << endl;
	}
	else if (x >= 10 && x < 20) {
		Cmp = x / 2 - 1.5;
		cout << Cmp << endl;
	}
	return;
}

int main() {
	cin >> x;

	Function(x);

	return 0;
}