#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	while (n--) {
		char arr[26] = { 0 };
		string s;
		cin >> s;
		
		for (int i = 0; i < s.length(); i++) {
			arr[s[i] - 65] = 1;
		}

		int sum = 0;
		for (int i = 0; i < 26; i++) {
			if (arr[i] == 0) {
				sum += (i + 65);
			}
		}
		cout << sum << endl;
	}

	return 0;
}