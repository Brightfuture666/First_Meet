#include<iostream>

using namespace std;

int main()
{
	int score, Cmp;

	cin >> score;
	Cmp = score / 10;

	switch (Cmp)
	{
	case 10:
	case 9:
		cout << "Excellent" << endl;
		break;
	case 8:
		cout << "Good" << endl;
		break;
	case 7:
	case 6:
		cout << "Pass" << endl;
		break;
	default:
		cout << "Fail" << endl;
		break;
	}

	return 0;
}