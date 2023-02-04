#include <stdio.h>

int main(){

    double salary;

    printf("Input your annual Salary to begin: ");
    scanf("%lf", &salary);


    //Using pointers to print salary

    double* ptr = &salary;
    printf("Salary entered was: %.2lf", *ptr);

    *ptr *=2;
    printf("\nSalary Currently: %.2lf", *ptr);


    return 0;
}