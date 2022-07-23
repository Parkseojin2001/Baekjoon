#pragma warning(disable:4996)

#include <stdio.h>

long long GCD(long long a, long long b);

int main() {
	long long  A, B, gcd;
	scanf("%lld %lld", &A, &B);
	gcd = GCD(A, B);
	for (int i = 0; i < gcd; i++) {
		printf("1");
	}
	return 0;
}

long long GCD(long long a, long long b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return GCD(b, a % b);
	}
}