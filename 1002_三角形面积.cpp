#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float a, b, c, s, p;

	cin >> a >> b >> c;

	p = (a + b + c) / 2;
	
	s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << fixed << setprecision(4) << s << endl;

	return 0;
}