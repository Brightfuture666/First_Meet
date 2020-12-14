#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	float R, X, P, Y;
	
	cin >> R >> X >> P;

	Y = X * pow(((100 + R) / 100) ,P);

	cout << fixed << setprecision(2) << Y << endl;

	system("pause");
	return 0;
}