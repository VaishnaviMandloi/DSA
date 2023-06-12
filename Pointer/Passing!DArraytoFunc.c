#include <stdio.h>

void func(int arr[] );

int main()
{
    int arr[4]= {1,2,3,4} ;
    func(arr);
    printf("array inside main : ");
    
    for(int i=0;i<4;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

void func(int arr[]){
    for(int i=0;i<4;i++){
        arr[i]+=2;
    }
}
