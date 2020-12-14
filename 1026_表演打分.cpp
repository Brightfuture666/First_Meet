#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int Score[11], max, min;
	float Ans, sum = 0;

	for (int i = 1; i <= 10; i++) {
		cin >> Score[i];
	}

	max = Score[1];
	min = Score[1];

	for (int i = 2; i <= 10; i++) {
		if (max < Score[i]) {
			max = Score[i];
		}
		if (min > Score[i]) {
			min = Score[i];
		}
	}

	for (int i = 1; i <= 10; i++) {
		sum += Score[i];
	}

	sum = sum - max - min;

	Ans = sum / 8;

	cout << fixed << setprecision(3) << Ans << endl;


	return 0;
}