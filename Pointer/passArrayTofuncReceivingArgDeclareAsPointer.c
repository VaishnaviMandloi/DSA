#include <stdio.h>

void func(int *i , float f[] , char c[4] );

int main()
{
    int i[4]= {1,2,3,4} ;
    float f[4] = {1.1,3.1,5.4,6.2};
    char c[4] = { 'a' ,'b','c','d'};
    printf("inside main :\nsize of i : %lu\nsize of f : %lu\nsize of c : %lu\n",sizeof(i),sizeof(f),sizeof(c));
    func(i,f,c);
    
    return 0;
}

void func(int *i,float f[],char c[4]){
    printf("inside main :\nsize of i : %lu\nsize of f : %lu\nsize of c : %lu",sizeof(i),sizeof(f),sizeof(c));
}
