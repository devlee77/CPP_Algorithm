#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1;
vector<int> v2;

int v1_bainarySearch(int begin, int end, int target) {
	while (begin <= end) {
		int mid = (begin + end) / 2;

		if (v1[mid] == target) return 1;
		v1[mid] < target ? begin = mid + 1 : end = mid - 1;
	}
	return 0;
}

int v2_bainarySearch(int begin, int end, int target) {
	while (begin <= end) {
		int mid = (begin + end) / 2;

		if (v2[mid] == target) return 1;
		v2[mid] < target ? begin = mid + 1 : end = mid - 1;
	}
	return 0;
}

int main(void) {
	int n, m;
	cin >> n >> m;

	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v1.push_back(tmp);
	}
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		v2.push_back(tmp);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int cnt = 0;
	for (int i = 0; i < v2.size(); i++) {
		if (v1_bainarySearch(0, v1.size() - 1, v2[i]))
			cnt++;
	}
	n = n - cnt;

	cnt = 0;
	for (int i = 0; i < v1.size(); i++) {
		if (v2_bainarySearch(0, v2.size() - 1, v1[i]))
			cnt++;
	}
	m = m - cnt;

	cout << n + m;
	return 0;
}