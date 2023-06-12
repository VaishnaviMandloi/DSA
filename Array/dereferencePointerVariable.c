#include <stdio.h>

int main()
{
    int a = 10 , *p1 = &a ;
    float b = 23.3 , *p2 = &b ;
    printf(" value of p1 = address of a = %p = %p\n", p1 , &a);
    printf(" value of p2 = address of b = %p = %p\n", p2 , &b);
    printf(" value of a = p1 point to value = %d = %d = address of a having value = %d\n", *p1 , a , *(&a));
    printf(" value of b = p2 point to value = %f = %f = address of a having value = %f\n", *p2 , b , *(&b));

    return 0;
}
