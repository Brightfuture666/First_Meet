#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

string a[2 ^ 31];

int main() {
	string Num;
	int Cmp, Ans = 0, k;

	cin >> Num;
	Cmp = Num.length();

	for (int i = 1; i <= Cmp; i++) {
		a[i] = Num[i - 1];
	}

	for (int i = 1; i <= Cmp; i++) {
		k = atoi(a[i].c_str());
		Ans += k;
	}

	cout << Ans << endl;

	return 0;
}