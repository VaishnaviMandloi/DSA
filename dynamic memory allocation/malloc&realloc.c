#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p ,i ,n;
    printf("enter number of integers to be entered : ");
    scanf("%d",&n);
    p = (int*)malloc(n*(sizeof(int)));
    if(p==NULL){
        printf("memory is not available");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("enter element %d : \n", i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    
    p = (int*)realloc(p , 9*(sizeof(int)));
    if(p==NULL){
        printf("memory is not available");
        exit(1);
    }
    for(i=n;i<9;i++){
        printf("\nenter element %d : ", i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<9;i++){
        printf("%d\t",*(p+i));
    }

    return 0;
}
