#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	int wei = 0;
	double Money;

	cin >> wei;

	if (wei <= 10) {
		Money = 0.80 * wei + 0.20;
		cout << fixed << setprecision(2) << Money << endl;
	}
	else if (wei > 10 && wei <= 20) {
		Money = 8.00 + 0.75 * (wei -10) + 0.20;
		cout << fixed << setprecision(2) << Money << endl;
	}
	else if (wei > 20 && wei <= 30) {
		Money =15.50 + 0.70 *( wei - 20) + 0.20;
		cout << fixed << setprecision(2) << Money << endl;
	}
	else {
		cout << "Fail" << endl;
	}

	return 0;
}