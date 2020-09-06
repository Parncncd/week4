#include<stdio.h>
int squareSum(int x) {
	int sum = 0;
	for (int i = 1; i <= x; i++) {
		sum += i;

	}
	x = sum * sum;
	return x;
}
int sumSquare(int y) {
	int sum = 0;
	for (int i = 1; i <= y; i++) {
		sum += i * i;
		
	}
	return sum;
}
int main() {
	int num ;
	scanf_s("%d", &num);
	printf("%d", squareSum(num) - sumSquare(num));
	return 0;
}