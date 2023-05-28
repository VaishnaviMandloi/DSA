#include <stdio.h>

int main()
{
    int arr[11] ={34,5,34,7,4,8,345,23,4,1,77} ,i,largest,smallest;
    
    largest=arr[0];
    smallest=arr[0];
    
    for(i=1;i<11;i++){
        if(largest<arr[i]){
            largest=arr[i];}
        if(smallest>arr[i]){
        smallest=arr[i];}
    }
    printf("largest = %d and smallest = %d",largest,smallest);

    return 0;
}
