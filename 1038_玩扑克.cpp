#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[25], k;
	
	for (int i = 0; i <= 24; i++) {
		cin >> a[i];
	}
	
	sort(a, a + 25);
	
	for (int i = 2; i <= 24; i = i + 2) {
		if (a[i - 1] == a[i]) {
			continue;
		} else {
			k = i;
		}
	}
	
	cout << a[k] << endl;
	
	return 0;
}
