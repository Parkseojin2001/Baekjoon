#pragma warning(disable:4996)

#include <stdio.h>
int fac(int n);

int main() {
	int N, result;
	scanf("%d", &N);
	result = fac(N);
	printf("%d", result);
	return 0;
}

int fac(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return fac(n - 1) * n;
	}
}