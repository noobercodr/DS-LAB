#include <stdio.h>
#include <ctype.h>

int j = 0;

//void convert(char a[], char b[]);
//int op(char c);

int main() {
    char infix[50], postfix[50];
    printf("Enter the expression: ");
    gets(infix);
    convert(infix, postfix);
    puts(postfix);

    return 0;
}

int op(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    } else {
        return -1;
    }
}

void convert(char a[], char b[]) {
    char stack[50];
    int top = -1;

    for (int i = 0; a[i] != '\0'; i++) {
        if (isalnum(a[i])) {
            b[j++] = a[i];
        }
        else if (a[i] == '(') {
            stack[++top] = a[i];
        }
         else if (a[i] == ')') {
            while (top!=-1 && stack[top] != '(') {
                b[j++] = stack[top--];
            }
            top--; // Discard the '(' from the stack
        }
        else if (top!=-1 && op(a[i]) <= op(stack[top])) {
            b[j++] = stack[top--];
            stack[++top] = a[i];
        }
        else {
            stack[++top] = a[i];
        }
    }

    while (top != -1) {
        b[j++] = stack[top--];
    }

    b[j] = '\0'; // Add null character at the end
}
