#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

void display(char name[20],int rollno,int marks);

int main()
{
    struct student stu1 ={"ram", 1 , 56} , stu2;
    strcpy(stu2.name,"sham sharma");
    stu2.rollno=2;
    stu2.marks=67;
    display(stu1.name,stu1.rollno,stu1.marks);
    display(stu2.name,stu2.rollno,stu2.marks);

    return 0;
}

void display(char name[20],int rollno, int marks){
    printf("name : %s\troll no. : %d\tmarks : %d\n",name,rollno,marks);
}
