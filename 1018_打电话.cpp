#include <iostream>

using namespace std;

int main() {
	double x;
	int time;

	cin >> x;

	if (x == 0.5) {
		cout << "3" << endl;
	}
	else if (x > 0.5) {
		time = int(5 * x + 1);
		cout << time << endl;
	}

	return 0;
}