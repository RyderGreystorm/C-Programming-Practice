#include <stdio.h>

//global variable

int result;

int addNumbers(int num1, int num2){
    result = num1 + num2;
    return result;
}


int main(){

int res = addNumbers(58, 65);
printf("%d", res);


}