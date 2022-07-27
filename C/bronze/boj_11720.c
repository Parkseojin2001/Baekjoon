# pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
int main(){
	int N, sum = 0;
	char* num;
	scanf("%d", &N);
	num = (char*)malloc(N+1);
	scanf("%s", num);
	for (int i = 0; i < N; i++) {
		sum += num[i] - '0';
	}
	printf("%d", sum);
	free(num);
	return 0;
}