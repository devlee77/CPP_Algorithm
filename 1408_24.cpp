#include <iostream>

using namespace std;

int main(void) {
	int a1, a2, a3;
	int b1, b2, b3;
	scanf("%d:%d:%d", &a1, &a2, &a3);
	scanf("%d:%d:%d", &b1, &b2, &b3);

	int sum1 = (a1 * 3600) + (a2 * 60) + a3;
	int sum2 = (b1 * 3600) + (b2 * 60) + b3;

	if (sum1 > sum2)
		sum2 += 24 * 3600;
	int ret = sum2 - sum1;

	printf("%02d:%02d:%02d", ret / 3600, ret % 3600 / 60, ret % 3600 % 60);

	return 0;
}