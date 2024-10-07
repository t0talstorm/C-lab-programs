#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[3] = {30, 20, 10};
    char str[] = "Abhijeet";
    char *s = &str[0];
    int *p = &a[0];

    printf("%d\n", *s);

    printf("%p STR & %c\n", (s + 1) , *(s+1)); 
    printf("%p INT & %d", (p + 1) , *(p + 1)); 

    return 0;
}
