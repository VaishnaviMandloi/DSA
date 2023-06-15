#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student stu[10]= {
        {"Aman",1,87},
        {"Priyanka",2,67.8},
        {"Rohit",3,88.1}
    };
    
    for (int i = 3; i < 10; i++) {
        printf("enter name , roll no ,marks of student %d :\n",i+1);
        scanf("%s%d%f",stu[i].name,&stu[i].rollno,&stu[i].marks);
    }
    printf("deatils of students :\n");
    
    for (int i = 0; i < 10; i++) {
        printf("\n%s %d %f\n",stu[i].name,stu[i].rollno,stu[i].marks);
    }

    return 0;
}
