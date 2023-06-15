#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student);
struct student change(struct student);

int main()
{
    struct student stu1 ={"ram", 1 , 56} , stu2={"sham das", 2 , 86};
    
    stu1 = change(stu1);
    stu2 =change(stu2);
    display(stu1);
    display(stu2);

    return 0;
}

void display(struct student stu){
    printf("name : %s\troll no. : %d\tmarks : %d\n",stu.name,stu.rollno,stu.marks);
}

struct student change(struct student stu){
    stu.marks+=5;
    stu.rollno-=1;
    return stu;
}
