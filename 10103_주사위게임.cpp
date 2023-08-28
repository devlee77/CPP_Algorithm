#include <iostream>

using namespace std;

int main(void) {
	int i = 0;
	int player1 = 100;
	int player2 = 100;
	cin >> i;

	while (i--) {
		int a, b;
		cin >> a >> b;
		if (a > b) { player2 -= a; }
		else if (a < b) { player1 -= b; }
	}
	cout << player1 << endl << player2;

	return 0;
}