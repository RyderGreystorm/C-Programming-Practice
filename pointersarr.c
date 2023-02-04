#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 8, 5, 6, 7, 9};
   
    for (int i = 0; i < 9; i++)
    {
        printf("Value: %d\t Memory Address: %p\n", *(arr +1), (arr + 1));
    }
    
    return 0;
}
