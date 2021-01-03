#include <iostream> 
#include <algorithm>
using namespace std;
struct node{
	int num;
	int chn;
	int math;
	int eng;
}a[301];
bool cmp(node x, node y) {
	if (x.chn + x.math + x.eng == y.chn + y.math + y.eng) {
		if (x.chn == y.chn) {
			return x.num < y.num;
		} else {
			return x.chn > y.chn;
		}
	} else {
		return x.chn + x.math + x.eng > y.chn + y.math + y.eng;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].chn >> a[i].math >> a[i].eng;
		a[i].num = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= 5; i++) {
		cout << a[i].num << " " << a[i].chn + a[i].math + a[i].eng << endl;
	}
	return 0;
}
