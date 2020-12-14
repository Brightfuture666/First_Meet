#include<iostream>

using namespace std;

int main()
{
	int n, g, s, b;

	cin >> n;

	g = n % 10;
	s = n % 100 / 10;
	b = n / 100;

	if (g * g * g + s * s * s + b * b * b == n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	system("pause");
	return 0;
}