#include <stdio.h>

int main() {
    int exit = 0;
    int choice, num;

    do {
        printf("\nEnter the program you wanna execute : \n 1. Odd or even \n 2. Prime number checker\n 0. to exit \n: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Please enter your number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("the number '%d' is even\n", num);
                else
                    printf("the number '%d' is odd\n", num);

                break;

            case 2:
                printf("Please enter your number: ");
                scanf("%d", &num);
                int flag = 1;
                for (int i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                    printf("%d is a prime number\n", num);
                else
                    printf("%d is not a prime number\n", num);
                break;

            case 0:
                exit = 1;
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n\n***********************************************");
    } while (exit != 1);

    return 0;
}
