#include <stdio.h>

int main(){
    int age = 50;
    printf("%d\n", age);
    printf("Address of variable age is: %p\n", &age);


    int* ptr_age = &age;
    printf("Value of ptr is: %p\n", ptr_age);
    printf("Valyue stored at ptr_age: %d\n ", *ptr_age);

    return 0;
}