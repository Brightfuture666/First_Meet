#include <iostream>

using namespace std;

int main() {
	int n, s = 1;
	cin >> n;
	
	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= ((2 * n - 1) - s) / 2; j++) {
			cout << " ";
		}
		
		for (int k = 1; k <= s; k++) {
			cout << k;
		}
		
			if (i < n) {
			s = s + 2;
		} else {
			s = s - 2;
		}
		
		cout << endl;
	}
	
	return 0;
}
