#include <iostream>
#include <algorithm>
using namespace std;
struct node{
	int num;
	int score;
}a[5005];
bool cmp(node x, node y) {
	if (x.score != y.score) {
		return x.score > y.score;
	} else {
		return x.num < y.num;
	}
}
int main() {
	int n, m, Score;
	cin >> n >> m;
	m = m * 1.5;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].num >> a[i].score;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = m; i <= n - 1; i++) {
		if (a[i].score == a[i + 1].score) {
			m++;
		} else {
			break;
		}
	}
	Score = a[m].score;
	cout << Score << " " << m << endl;;
	for (int i = 1; i <= m; i++) {
		cout << a[i].num << " " << a[i].score << endl;
	}
	return 0;
}
