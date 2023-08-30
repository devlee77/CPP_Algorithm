#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	if (n == 1) {
		cout << "*";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			for (int j = 0; j < n - 1; j++) {
				cout << " ";
			}
			cout << "*" << endl;
		}
		else if (i == n - 1) {
			for (int j = 0; j < 2 * n - 1; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 0; j < n - 1 - i; j++) {
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < i * 2 - 1; j++) {
				cout << " ";
			}
			cout << "*" << endl;
		}
	}

	return 0;
}