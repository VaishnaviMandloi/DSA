#include<stdio.h>
void main()
{
  int arr[5] , i;
  for(i=0;i<5;i++){
    printf("enter the value of element %d : ",i+1);
    scanf("%d",&arr[i]);
  }
  printf("the array elements are :");
  for(i=0;i<5;i++)
  {
    printf("%d\t",arr[i]);
  }
}
