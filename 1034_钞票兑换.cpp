#include <iostream>

using namespace std;

int main() {
	int n, Ans = 0;
	cin >> n;
	
	for (int i = 0; i <= n / 50; i++) {
		Ans += (n - i * 50) / 20 + 1;
	}
	
	cout << Ans << endl;
	return 0;
}
