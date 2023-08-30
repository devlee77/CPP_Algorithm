#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	while (n--) {
		string k;
		cin >> k;
		
		if ((k[k.length() - 1] - '0') % 2 == 0) {
			cout << "even";
		}
		else {
			cout << "odd";
		}
		if (n != 0) { cout << endl; }
	}

	return 0;
}