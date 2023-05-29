#include <stdio.h>

int main()
{
    int arr[3][3], arr1[3][3]={1,1,1,1,1,1,1,1,1} , arr2[3][3]={2,2,2,2,2,2,2,2,2}, row,col;
    
    printf("Additon matrix :\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            arr[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            printf("%5d",arr[row][col]);
        }
        printf("\n");
    }


    return 0;
}
