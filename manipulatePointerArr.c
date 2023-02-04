#include <stdio.h>


int main(){
    int i;
    int numbers[10];
    int* pn;

    pn = numbers;

    for ( i = 0; i < 10; i++)
    {
        *pn = i +1;
        pn++;
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("numbers[%d] = %d\n", i +1, numbers[i]);
    }
    
    
    return 0;
}