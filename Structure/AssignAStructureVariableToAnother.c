#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student stu1={"Ram",1,34.4} , stu2;
    stu2=stu1;
    
    printf("student details :\nstudent 1 : %s %d %.2f\nstudent 2 : %s %d %.2f",stu1.name,stu1.rollno,stu1.marks,stu2.name,stu2.rollno,stu2.marks);

    return 0;
}
