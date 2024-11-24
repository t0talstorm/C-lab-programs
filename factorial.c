#include <stdio.h>

int factorial(int n);

int main() {
    int number;
    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d.\n", number, factorial(number));
    }
    
    return 0;
}


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
