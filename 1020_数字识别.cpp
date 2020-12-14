#include <iostream>
#include <math.h>

using namespace std;

int x, y = 0, z = 1, Cmp, Ans, node;

void Check_Num() {
	for (int i = 10; i <= 1000; pow(i, y++), z++) {
		Cmp = x / pow(10, y);
		if (Cmp >= 1 && Cmp < 10) {
			cout << z << endl;
			node = z;
			break;
		}
	}
	return;
}


void out_count(int z) {
	switch (z)
	{
	case 1:
		cout << x << endl;
		break;
	case 2:
		cout << x / 10 << endl;
		cout << x % 10 << endl;
		break;
	case 3:
		cout << x / 100 << endl;
		Ans = x % 100;
		cout << Ans / 10 << endl;
		Cmp = Ans % 10;
		cout << Cmp << endl;
		break;
	case 4:
		cout << x / 1000 << endl;
		Ans = x % 1000;
		cout << Ans / 100 << endl;
		Cmp = Ans % 100;
		cout << Cmp / 10 << endl;
		cout << Cmp % 10 << endl;
		break;
	}
}

int main() {

	cin >> x;

	Check_Num();
	out_count(node);
	
	return 0;
}
