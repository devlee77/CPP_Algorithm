#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	int ten[10] = { 6,7,8,9,0,1,2,3,4,5 };
	string str = "IJKLABCDEFGH";

	cout << str[n % 12] << ten[n % 10];
	return 0;
}