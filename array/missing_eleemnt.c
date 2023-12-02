#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    int hash[n + 1];
     for (int i = 0; i <= n; i++) {
        hash[i] = 0;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        hash[a[i]] = 1;
    }

    for (int i = 1; i < n; i++) {
        if (hash[i] != 1) {
            printf("Missing element is %d\n", i);
            break; // Move break inside the if statement block
        }
    }
}
