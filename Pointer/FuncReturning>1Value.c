#include <stdio.h>

void func(int a ,int b , int*pp, int *ps , int *pd);

int main()
{
    int a = 10 ,b =15 , prod , sum , diff;
    func(a,b,&prod,&sum,&diff);
    printf("product : %d\nsum : %d\ndiffernce : %d", prod,sum,diff);

    return 0;
}

void func(int a , int b , int*pp , int*ps ,int*pd){
    *pp =a*b;
    *ps = a+b;
    *pd = a-b;
}
