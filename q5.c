#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) { stack[++top] = x; }
int pop() { return stack[top--]; }

int main() {
    char exp[MAX];
    int i, a, b, res;
    printf("Enter postfix expression: ");
    gets(exp);
    for(i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];
        if(isdigit(c))
            push(c - '0');
        else {
            b = pop();
            a = pop();
            switch(c) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/': res = a / b; break;
            }
            push(res);
        }
    }
    printf("Result: %d", stack[top]);
    return 0;
}
