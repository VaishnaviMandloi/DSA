#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student stu1 = {"Marry",25,68};
    struct student stu2,stu3;
    strcpy(stu2.name,"john");
    stu2.rollno = 2;
    stu2.marks = 98;
    printf("enter name ,roll no , marks for stu3 : \n");
    scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);
    printf("stu1 : %s %d %.2f\n",stu1.name,stu1.rollno,stu1.marks);
    printf("stu2 : %s %d %.2f\n",stu2.name,stu2.rollno,stu2.marks);
    printf("stu3 : %s %d %.2f",stu3.name,stu3.rollno,stu3.marks);

    return 0;
}
