#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float C, F;

	cin >> F;

	C = (F - 32) * 5 / 9;

	cout << fixed << setprecision(4) << C << endl;

	return 0;
}