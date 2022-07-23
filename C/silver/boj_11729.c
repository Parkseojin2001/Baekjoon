#pragma warning(disable:4996)

#include <stdio.h>
#include <math.h>

void hanoi(int A, int B, int C,int n);

int main() {
	int N, K;
	scanf("%d", &N);
	K = pow(2, N) - 1;
	printf("%d\n", K);
	hanoi(1, 2, 3, N);
	return 0;
}

void hanoi(int A, int B, int C, int n) {
	if (n == 1) {
		printf("%d %d\n", A, C);
	}

	else {
		hanoi(A, C, B, n - 1);
		printf("%d %d\n", A, C);
		hanoi(B, A, C, n - 1);
	}
}