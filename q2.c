#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if(top < MAX - 1)
        stack[++top] = c;
}

char pop() {
    if(top >= 0)
        return stack[top--];
    return '\0';
}

int main() {
    char str[MAX], rev[MAX];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
        push(str[i]);
    for(i = 0; str[i] != '\0'; i++)
        rev[i] = pop();
    rev[i] = '\0';
    printf("Reversed string: %s", rev);
    return 0;
}
