#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int arr[101][101] = { 0, };

	int n = 4;
	int xMax = 0;
	int yMax = 0;

	while (n--) {
		int a, b, c, d = 0;
		cin >> a >> b >> c >> d;

		for (int i = a; i < c; i++) {
			for (int j = b; j < d; j++) {
				arr[i][j] = 1;
			}
		}
		if (xMax < a || xMax < c) {
			xMax = a < c ? c : a;
		}
		if (yMax < b || yMax < d) {
			yMax = b < d ? d : b;
		}
	}
	int ret = 0;
	for (int i = 0; i <= xMax; i++) {
		for (int j = 0; j <= yMax; j++) {
			if (arr[i][j]) {
				ret++;
			}
		}
	}

	cout << ret;

	return 0;
}