#pragma warning(disable:4996)

#include <stdio.h>
int fibo(int N);
int main() {
	int n, result;
	scanf("%d", &n);
	result = fibo(n);
	printf("%d", result);
	return 0;
}

int fibo(int N) {
	if (N == 0) {
		return 0;
	}
	else if (N == 1 || N == 2) {
		return 1;
	}
	else {
		return fibo(N - 1) + fibo(N - 2);
	}
}