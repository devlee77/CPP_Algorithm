#include <iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	while (n--) {
		int arr[101][101] = { 0, };
		int x, y;
		cin >> y >> x;
		for (int i = y; i > 0 ; i--) {
			for (int j = 1; j <= x; j++) {
				int value;
				cin >> value;
				arr[i][j] = value;
			}
		}
		int ret = 0;
		for (int i = y; i > 0; i--) {
			for (int j = 1; j <= x; j++) {
				if (arr[i][j]) {
					for (int z = i; z > 0; z--) {
						if (arr[z][j] == 0) {
							ret++;
						}
					}
				}
			}
		}

		cout << ret << endl;
	}

	return 0;
}