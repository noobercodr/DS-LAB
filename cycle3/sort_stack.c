#include <stdio.h>

#define MAX_SIZE 100

int top = -1;
int st[MAX_SIZE];

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1; // You might want to handle this case appropriately in your program
    }
    return st[top--];
}

void push(int x) {
    if (top == -1 || x >= st[top]) {
        st[++top] = x;
    } else {
        int temp[MAX_SIZE];
        int i = 0;

        while (top != -1 && x < st[top]) {
            temp[i++] = pop();
        }

        st[++top] = x;

        while (i > 0) {
            st[++top] = temp[--i];
        }
    }
}

int main() {
    push(34);
    push(3);
    push(31);
    push(98);
    push(92);
    push(23);

    // Display the sorted stack
    while (top != -1) {
        printf("%d ", pop());
    }

    return 0;
}
