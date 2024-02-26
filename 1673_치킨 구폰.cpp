#include <iostream>

using namespace std;

int main(void) {
	int n, k;

	while (cin >> n >> k) {
		int stampChicken = n;
		int totalChicken = n;

		while (stampChicken >= k) {
			totalChicken += stampChicken / k;
			stampChicken = (stampChicken / k) + (stampChicken % k);
		}
		cout << totalChicken << endl;
	}
	return 0;
}