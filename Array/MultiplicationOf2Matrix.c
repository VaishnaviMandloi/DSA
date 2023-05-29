#include <stdio.h>

int main()
{
    int arr[4][5], arr1[4][3]={0,1,1,1,1,1,1,1,1,1,1,1} , arr2[3][5]={2,2,2,2,2,0,2,2,2,2,0,2,2,2,2}, row,col;
    
    printf("Multiplied element's matrix :\n");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            for(int k=0;k<3;k++){
                arr[row][col]+=arr1[row][k]*arr2[k][col];
            }
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
