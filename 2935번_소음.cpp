#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string a, b, c;
	cin >> a >> b >> c;

	string ret = "";
	if (b == "*") {
		if (a != "1" && c != "1") {
			ret = a + c.substr(1);
		}
		else {
			ret = a.length() > c.length() ? a : c;
		}
	}
	else {
		if (a.length() == c.length()) {
			if (a.length() == 1) {
				ret = "2";
			}
			else {
				ret = "2" + a.substr(1);
			}
		}
		else {
			if (a.length() > c.length()) {
				ret = a;
				ret[a.length() - c.length()] = '1';
			}
			else {
				ret = c;
				ret[c.length() - a.length()] = '1';
			}
		}
	}
	cout << ret;

	return 0;
}