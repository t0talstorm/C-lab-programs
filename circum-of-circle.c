#include <stdio.h>
#define pi 1.141;

int main(){

    double radius;

    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    double circumfrence = 2*radius*pi;

    printf("\nThe circumfrence of the circle is : %d",circumfrence);


}