#include <stdio.h>

void check(int num);
int sum( int arr[]);

int main()
{
    int arr[5] = {3,7,35,55,44} , i;
    //int arr[5] = {1,1,1,1,1} , i;
    //passing element of array
    printf("array checking for odd or even element :\n");
    for(i=0;i<5;i++){
        check(arr[i]);
    }
    
    //passing array to a function
    printf("the sum of square of array is %d", sum(arr)\ncontent of array is now : );
    
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

void check(int num){
    if(num%2==0){
        printf("%d is a even number\n",num);
    }
    else
        printf("%d is a odd number\n",num);
}

int sum(int arr[]){  //9+49+(35*35=175*7=1225)+(55*55=121*25=3025)+(44*44=121*16=1936)=58+1225+3025+1936=6244
    int sum=0;
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*arr[i];
        sum+=arr[i];
        //printf("%d %d\t",sum,arr[i]*arr[i]);
    }
    return sum;
}
