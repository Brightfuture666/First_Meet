#include <iostream>
#include <string>

using namespace std;

int main() {
	string Word;
	int j;

	getline(cin, Word);

	for (int i = 0; i < Word.length(); i++) {
		j = Word[i];
		if (j >= 65 && j <= 87) {
			j = j + 3;
			Word[i] = j;
			cout << Word[i];
		}
		else if (j > 87 && j <= 90) {
			j = j - 23;
			Word[i] = j;
			cout << Word[i];
		}
		else if (j >= 97 && j <= 119) {
			j = j + 3;
			Word[i] = j;
			cout << Word[i];
		}
		else if (j > 119 && j <= 122) {
			j = j - 23;
			Word[i] = j;
			cout << Word[i];
		}
		else {
			cout << Word[i];
		}
		
	}

	return 0;
}