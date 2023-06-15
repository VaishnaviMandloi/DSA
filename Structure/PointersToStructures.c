#include <stdio.h>
#include <string.h>

struct student{
    char name[10];
    int rollno;
    int marks;
};

int main()
{
    struct student stu = {"ram" , 1 , 56} , *ptr=&stu;
    
    printf("name : %s\tRoll no. : %d\tmarks : %d",ptr->name,ptr->rollno,ptr->marks);

    return 0;
}
