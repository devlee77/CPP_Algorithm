#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	while (n--) {
		string str;
		cin >> str;

		string revstr = str;
		reverse(revstr.begin(), revstr.end());
		
		int ret = stoi(str) + stoi(revstr);
		str = to_string(ret);
		bool check = true;
		for (int i = 0; i < str.length() / 2; i++) {
			if (str[i] != str[str.length() - 1 - i]) {
				check = false;
			}
		}
		if (check) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl; 
		}
	}


	return 0;
}