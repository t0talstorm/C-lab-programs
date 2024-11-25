/*Write a C program using structures to print the pay slip of an employee after accepting details like id. no, name, designation, department and basic salary*/
#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float basic_salary;

}employee;
float calculate_tax(float salary);

int main(void){

    int n = 1;

    printf("Enter the number of employees you wanna have : ");
    scanf("%d", &n);
    employee employees[n];

    for(int i = 0 ; i < n ; i++){
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Enter the Employee ID : ");
        scanf("%d", &employees[i].id);

        printf("Enter the Employee Name : ");
        scanf("%s", employees[i].name);

        printf("Enter the Employee designation : ");
        scanf("%s", employees[i].designation);

        printf("Enter the Employee department : ");
        scanf("%s", employees[i].department);

        printf("Enter the Employee basic salary : ");
        scanf("%f", &employees[i].basic_salary);

    }

    for(int i = 0 ; i < n ; i++){

        printf("\nThe details for employee with employee ID %d" , employees[i].id);

        printf("\nThe Employees Name is %s" , employees[i].name);
        printf("\nThe Employees designation is %s" , employees[i].designation);
        printf("\nThe Employees department is %s" , employees[i].department);
        printf("\nThe Employees basic salary is %.2f" , employees[i].basic_salary);

        float tax = calculate_tax(employees[i].basic_salary);
        float DA = 0.1*employees[i].basic_salary;
        float HRA = 0.2*employees[i].basic_salary;

        float final_salary = employees[i].basic_salary - tax + DA + HRA;
        
        printf("\nThe Employees final salary is %.2f\n\n" , final_salary);
    }


    return 0;
}

float calculate_tax(float salary) {
    float tax = 0.0;

    // Tax Slabs for individuals below 60 years
    if (salary <= 250000) {

        tax = 0;  // No tax for income up to ₹2.5 lakh

    } else if (salary <= 500000) {

        tax = (salary - 250000) * 0.05;  // 5% tax for income between ₹2.5 lakh and ₹5 lakh

    } else if (salary <= 1000000) {

        tax = (500000 - 250000) * 0.05 + (salary - 500000) * 0.2;  // 20% tax for income between ₹5 lakh and ₹10 lakh

    } else {

        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.2 + (salary - 1000000) * 0.3;  // 30% tax for income above ₹10 lakh
    }

    return tax;
}
