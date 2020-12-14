#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int x, age[100];
	float Average, sum = 0;

	cin >> x;
	for (int i =0; i < x; i++) {
		cin >> age[i];
		sum = sum + age[i];
	}

	Average = sum / x;

	cout << fixed << setprecision(2) << Average << endl;

	return 0;
}