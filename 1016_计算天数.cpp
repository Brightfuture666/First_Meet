#include<iostream>

using namespace std;

int main()
{
	int year = 0, month = 0, days = 0;
	bool flag;

	cin >> year >> month;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		flag = true;
	}
	else {
		flag = false;
	}

	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			cout << days << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			cout << days << endl;
			break;
		case 2:
			days = flag ? 29 : 28;
			cout << days << endl;
			break;
		default:
				break;
			}
	
	return 0;
}