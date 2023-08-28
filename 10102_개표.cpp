#include <iostream>

using namespace std;

int main(void) {
	int cnt = 0;
	int a_cnt = 0, b_cnt = 0;
	cin >> cnt;

	while (cnt--) {
		char c;
		cin >> c;

		if (c == 'A') {
			a_cnt++;
		}
		else {
			b_cnt++;
		}
	}
	if (a_cnt > b_cnt) {
		cout << "A";
	}
	else if (a_cnt < b_cnt) {
		cout << "B";
	}
	else { cout << "Tie"; }

	return 0;
}