#include <iostream>

using namespace std;

long i = 1;

int dfs(long long n) {
	if (n == 1) {
		return i;
	}
	
	if (n % 2 == 0) {
		dfs(n / 2);
		i++;
	}
	else {
		dfs(3 * n + 1);
		i++;
	}

}

int main() {
	long long n;
	int Ans;

	cin >> n;

	Ans = dfs(n);

	cout << Ans << endl;

	return 0;
}