#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name[6]{"[1] apples", "[2] pears", "[3] oranges" ,"[4] grapes" , "[0] Exit"};
	int Cmp;
	float a, p, o, g;

	a = 3.00;
	p = 2.50;
	o = 4.10;
	g = 10.20;

	for (int i = 1; i <= 5; i++) {
		cout << name[i -1] << endl;
	}

	cin >> Cmp;

	switch (Cmp)
	{
	case 1:
		cout << fixed << setprecision(1) << "price="<< a << endl;
		break;
	case 2:
		cout << fixed << setprecision(1) << "price=" << p << endl;
		break;
	case 3:
		cout << fixed << setprecision(1) << "price=" << o << endl;
		break;
	case 4:
		cout << fixed << setprecision(1) << "price=" << g << endl;
		break;
	case 0:
		break;
	default:
		cout << "price=0" << endl;
		break;
	}

	return 0;
}