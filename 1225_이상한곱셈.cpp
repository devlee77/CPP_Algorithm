#include <iostream>

using namespace std;

int main(void) {
	string a, b;
	cin >> a >> b;

	long long ret = 0;
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++) {
			ret += ((a[i] - '0') * (b[j] - '0'));
		}
	}
	cout << ret;
	return 0;
}