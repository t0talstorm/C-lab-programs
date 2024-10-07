#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

// Iterative function to print Fibonacci series
void fibonacciI(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series (Iterative): \n");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            next = first;
        } else if (i == 1) {
            next = second;
        } else {
            next = first + second; 
            first = second; 
            second = next; 
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int choice, n;

    do {
        printf("\nMenu:\n1. Fibonacci Series (Recursive)\n2. Fibonacci Series (Iterative)\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice != 3){
        printf("Enter the number of terms in Fibonacci series: ");
                scanf("%d", &n);
        }
        switch (choice) {
            case 1:
                
                printf("Fibonacci Series (Recursive): \n");
                for (int i = 0; i < n; i++) {
                    int p = fibonacci(i); 
                    printf("%d ", p);
                }
                printf("\n");
                break;

            case 2:

                fibonacciI(n);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
