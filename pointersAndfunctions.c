#include <stdio.h>

int *addNum(int *num1, int *num2, int *result){
    *result= *num1 + *num2;
    return result;

}

int main(){
    int a = 50;
    int b = 60;
    int result;

    int *res = addNum(&a, &b, &result);
    printf("%d", *res);

    return 0;
}