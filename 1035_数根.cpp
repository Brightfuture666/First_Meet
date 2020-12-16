#include <iostream> 

using namespace std;

int work(int j) {
	int r = j, k = 0;
	
	for (int i = 1; r > 0; i++) {
		k += r % 10;
		r = r / 10;
	}
	
	if (k < 10) {
		return k;
	} else {
		work(k);
	}
}

int main() {
	int n;
	cin >> n;
	
	cout << work(n);
	
	return 0;
}
