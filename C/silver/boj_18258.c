#pragma warning(disable:4996)

#include<stdio.h>
#include<string.h>

int queue[2000001];
int f = 0;
int r = -1;

void delete(char* ar);
void push(int X);
int pop();
int size();
int empty();
int front();
int back();

int main() {
	int N, num,result;
	char order[6] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		getchar();
		scanf("%s", order);
		if (strcmp(order, "push") == 0) {
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(order, "pop") == 0) {
			result = pop();
			printf("%d\n", result);
		}
		else if (strcmp(order, "size") == 0) {
			result = size();
			printf("%d\n", result);
		}
		else if (strcmp(order, "empty") == 0) {
			result = empty();
			printf("%d\n", result);
		}
		else if (strcmp(order, "front") == 0) {
			result = front();
			printf("%d\n", result);
		}
		else if (strcmp(order, "back") == 0) {
			result = back();
			printf("%d\n", result);
		}
		delete(order);
	}
	return 0;
}

void delete(char* ar) {
	for (int i = 0; i < 6; i++) {
		ar[i] = '\n';
	}
}
void push(int X) {
	queue[++r] = X;
}
int pop() {
	int e;
	if (empty() == 1) {
		return -1;
	}
	else {
		e = queue[f];
		f += 1;
		return e;
	}
}
int size() {
	if (empty() == 1) {
		return 0;
	}
	else {
		return (r - f + 1);
	}
}
int empty() {
	if (r - f + 1 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int front() {
	if (empty() == 1) {
		return -1;
	}
	else {
		return queue[f];
	}
}
int back() {
	if (empty() == 1) {
		return -1;
	}
	else {
		return queue[r];
	}
}