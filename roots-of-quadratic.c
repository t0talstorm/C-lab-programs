#include <stdio.h>
#include <math.h>

int main (){

float a = 0  , b = 0 , c = 0 , x1 , x2;
 

    printf("enter a , b , c in the format of a x^2 + bx + c\n");

    printf("\nEnter a : ");
    scanf("%f",&a);         // input value of a 
    
    printf("\nEnter b : ");
    scanf("%f",&b);         // input value of b 

    printf("\nEnter c : ");
    scanf("%f",&c);         // input value of c 


    float discriminant = pow(b,2) - (4 * a *c); // finding the discriminant 

    if (discriminant > 0){

    x1 =  ((-b) + sqrt(discriminant))/(2*a); // calculating root 1 
    x2 =  ((-b) - sqrt(discriminant))/(2*a); // calculating root 2

    printf("\nThe first root is : %f",x1);
    printf("\nThe second root is : %f",x2);

    }
    else if(discriminant == 0 ){

        x1 = x2 = -b / (2 * a);
        printf("\nThe equal roots are equal to : %f",x1); // calculating the equal roots 

    }
    else if(discriminant < 0){

        float real = -b / (2 * a); // calculating the real part of the root 

        float img = sqrt(-discriminant) /(2*a); // calculating the imaginary part of the root 

        printf("\nThe imaginary root is : %f+%fi",real , img); 
    }

   
    return 0; 


}