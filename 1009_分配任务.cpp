#include<iostream>

using namespace std;

int main()
{
	int BoyNum = 0, GirlNum = 0;

	cin >> BoyNum >> GirlNum;

	if ((BoyNum + GirlNum) < 10) {
		cout << "water" << endl;
	}
	else if ((BoyNum + GirlNum) >= 10 && (BoyNum > GirlNum)) {
		cout << "tree" << endl;
	}
	else if ((BoyNum + GirlNum) >= 10 && (BoyNum <= GirlNum)) {
		cout << "tea" << endl;
	}

	return 0;
}