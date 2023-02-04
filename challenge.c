#include <stdio.h>

//This program finds the largest number in an array using pointers

int main(){

    int arr[] = {34, 12, 21, 54, 48};
    int largest = *arr;
    

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (largest < *(arr + i))
        {
            largest = *(arr + i);
           
        }
        
    }

    printf("%d", largest);
   

    



return 0;
}