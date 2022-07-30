# pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

int top = -1;

void push(int* Stack, int data);
int pop(int* Stack);
int main() {
	int K, *stack, n,sum=0;
	scanf("%d", &K);
	stack = (int*)malloc(sizeof(int) * (K + 1));
	for (int i = 0; i < K; i++) {
		scanf("%d", &n);
		if (n != 0) {
			push(stack, n);
		}
		else {
			pop(stack);
		}
	}
	while (top > -1) {
		sum += pop(stack);
	}
	printf("%d", sum);
	return 0;
}

void push(int* Stack, int data) {
	top++;
	Stack[top] = data;
}
int pop(int* Stack) {
	int e;
	e = Stack[top];
	top--;
	return e;
}