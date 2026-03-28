#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    else
        return stack[top--];
}

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);
	int i;
    // Push all characters
    for (i = 0; i < len; i++) {
        push(str[i]);
    }

    // Pop to reverse
    for (wi = 0; i < len; i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
