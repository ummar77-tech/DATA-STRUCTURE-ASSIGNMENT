#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    if (top != -1)
        top--;
}

int isEmpty() {
    return top == -1;
}

int main() {
    char exp[100];

    printf("Enter expression: ");
    scanf("%s", exp);
	int i;
    for ( i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')') {
            if (isEmpty()) {
                printf("Not Balanced\n");
                return 0;
            }
            pop();
        }
    }

    if (isEmpty())
        printf("Balanced Expression\n");
    else
        printf("Not Balanced\n");

    return 0;
}
