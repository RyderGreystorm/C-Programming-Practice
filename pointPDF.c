#include <stdio.h>

int main(){

    int a = 8;
    int* x;
    int num;
    float grades;   
    int* p;
    float* ptr;

    p = &num;
    ptr = &grades;

    *p = 25;
    printf("Num is equal to: %d", num);

    *ptr = 25.3;
    printf("\n Float is equal to: %f", grades);


    printf("%d", *x);
    return 0;
}