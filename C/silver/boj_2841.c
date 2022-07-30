# pragma warning(disable:4996)

#include <stdio.h>

typedef struct arr {
	int arr[500000];
	int top;
}Stack;

Stack s[7];

void push(Stack* string, int data);
void pop(Stack* string);

int main() {
	int N, P, cnt = 0,n,p;
	scanf("%d %d", &N, &P);
	for (int i = 0; i < 6; i++) {
		s[i].top = -1;
	}
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &n, &p);
		while (s[n].top != -1 && s[n].arr[s[n].top] > p) {
			pop(&s[n]);
			cnt++;
		}
		if (s[n].top == -1 || s[n].arr[s[n].top] < p) {
			push(&s[n], p);
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}

void push(Stack* string, int data) {
	(string->top)++;
	string->arr[string->top] = data;
}
void pop(Stack* string) {
	int e;
	e = string->arr[string->top];
	(string->top)--;
}
