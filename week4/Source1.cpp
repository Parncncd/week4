#include<stdio.h>
int main() {
	int i, num , j, SUM = 0;
	scanf_s("%d", &num);
	for (i = 2; i < num; i++) {
		int sum = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0) {
				sum++;
			}
			if (sum == 3) {
				break;
			}
		}
		if (sum == 2) {
			SUM += i;
		}
	}
	printf("%d", SUM);
	return 0;
}
