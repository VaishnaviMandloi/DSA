#include <stdio.h>

int main()
{
    int arr[7] = { 2 , 4, 6,79, 0, 57,90};
    
    for(int i=0;i<7;i++){
        printf("array element %d value : %d and address : %p\n", i, *(arr+i) ,arr+i);
    }

    return 0;
}
