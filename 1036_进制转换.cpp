#include <iostream>

using namespace std;

int main() {
	int n, r, j, k;
	
	cin >> n;
	r = n;
	
	while(r > 0) {
		j = r / 2;
		k = r % 2;
		cout << "shang:" << j << " " << "yu:" << k << endl;
		r = r / 2;
	}
	
	return 0;
}
