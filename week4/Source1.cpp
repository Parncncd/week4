#include<stdio.h>
int main() {
	long long i, num , j, SUM = 0;
	scanf_s("%lld", &num);
	for (i = 2; i < num; i++) {
		int sum = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0) {
				sum++;
			}
			
		}
		if (sum == 2) {
			SUM += i;
		}
	}
	printf("%lld", SUM);
	return 0;
}
