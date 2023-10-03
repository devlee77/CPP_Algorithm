#include <iostream>

using namespace std;

int main(void) {
	int a1, a2;
	int b1, b2;

	cin >> a1 >> a2;
	cin >> b1 >> b2;

	int ret = (a1 + b2) > (a2 + b1)? (a2 + b1) : (a1 + b2);

	cout << ret;
	return 0;
}