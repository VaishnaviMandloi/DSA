#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student *);
void inc_marks(struct student *);

int main()
{
    struct student stu1 ={"ram", 1 , 56} , stu2={"sham das", 2 , 86};
    
    inc_marks(&stu1);
    inc_marks(&stu2);
    display(&stu1);
    display(&stu2);

    return 0;
}

void display(struct student *stu){
    printf("name : %s\troll no. : %d\tmarks : %d\n",stu->name,stu->rollno,(*stu).marks);
}

void inc_marks(struct student *stu){
    stu->marks++;
}
