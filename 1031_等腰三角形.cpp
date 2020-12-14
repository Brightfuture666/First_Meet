#include <iostream> 

using namespace std;

int main() {
	int n, s = 1;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= s; k++) {
			cout << "*";
		}
		cout << endl;
		s = s + 2;
	}
	
	return 0;
}
