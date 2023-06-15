#include <stdio.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student);
void dec_marks(struct student stuarr[]);

int main()
{
    int i;
    struct student stuarr[3] ={
        {"sita", 1, 78},
        {"Ramesh" , 3 ,86},
        {"Santanu" ,6 ,98}
    };
    dec_marks(stuarr);
    for (i = 0; i < 3; i++) {
        display(stuarr[i]);
    }
    
    return 0;
}

void display(struct student stu){
    printf("name :%s\troll no : %d\tmarks : %d\n",stu.name,stu.rollno,stu.marks);
}

void dec_marks(struct student stuarr[]){
    int i;
    for (i = 0; i < 3 ;i++){
        stuarr[i].marks -=10;
    }
}
