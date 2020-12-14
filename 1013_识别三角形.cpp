#include<iostream>

using namespace std;

int main()
{
	int a, b, c, Ans, Cmp, node;

	cin >> a >> b >> c;

	Ans = a * a + b * b;
	Cmp = a * a + c * c;
	node = b * b + c * c;

	if ((a + b > c) && (a - b < c) && (a +c > b) && (a - c < b) && (b + c > a)
		&& (b - c < a)){
		if (a == b && b == c) {
			cout << "Equilateral" << endl;
		}
		else if (Ans == c *c || Cmp == b * b || node == a * a) {
			cout << "Right" << endl;
		}
		else {
			cout << "General" << endl;
		}
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}