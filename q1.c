#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        top++;
        stack[top] = x;
        printf("%d pushed\n", x);
    }
}

void pop() {
    if(top == -1)
        printf("Stack Underflow\n");
    else {
        printf("%d popped\n", stack[top]);
        top--;
    }
}

void isEmpty() {
    if(top == -1)
        printf("Stack is Empty\n");
    else
        printf("Stack is not Empty\n");
}

void isFull() {
    if(top == MAX - 1)
        printf("Stack is Full\n");
    else
        printf("Stack is not Full\n");
}

void display() {
    if(top == -1)
        printf("Stack is Empty\n");
    else {
        printf("Stack elements: ");
        for(int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

void peek() {
    if(top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}

int main() {
    int choice, val;
    while(1) {
        printf("\n1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Display\n6.Peek\n7.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                isFull();
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
