#include <iostream>
#include <cmath>
using namespace std;

long long a;

int main() {
	long b;
	int k;
	
	cin >> a >> b;
	
	if (b > 4 && b % 4 != 0) {
		b = b % 4;
	} else if (b > 4 && b % 4 == 0) {
		b = 1;
	}
	
	k = pow(a, b);
	k = k % 10;
	
	cout << k << endl;
	
	return 0;
}
