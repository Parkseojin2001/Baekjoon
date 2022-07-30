# pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>

int top = -1;

void push(char* Stack);
void pop(char* Stack);
int main() {
	char str[51], stack[51];
	int T, L, flag = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		getchar();
		scanf("%s", str);
		L = strlen(str);
		for (int j = 0; j < L; j++) {
			if (str[j] == '(') {
				push(stack);
			}
			else if (str[j] == ')') {
				if (top == -1) {
					printf("NO\n");
					flag = 1;
					break;
				}
				else {
					pop(stack);
				}
			}
		}
		if (top == -1 && flag == 0) {
			printf("YES\n");
		}
		else if (top != -1 && flag == 0) {
			printf("NO\n");
		}
		top = -1;
		flag = 0;
	}
	return 0;
}

void push(char* Stack) {
	top++;
	Stack[top] = '(';
}
void pop(char* Stack) {
	top--;
}