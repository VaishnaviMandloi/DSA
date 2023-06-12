#include <stdio.h>

int main()
{
    int a=10 , *pa = &a , **ppa=&pa;
    printf("value of a = %d = pa point to value = %d = pointer to pointer to a = %d\n", a ,*pa ,**ppa);
    printf("address of a = %p = pa value = %p = ppa point to value = %p\n", &a ,pa ,*ppa);
    printf("address of pa = %p = ppa value = %p\n", &pa ,ppa);
    printf("address of ppa = %p ",&ppa);

    return 0;
}
