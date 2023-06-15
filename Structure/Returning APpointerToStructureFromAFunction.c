#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student *);
struct student * func();
struct student *ptr;

int main()
{
    
    struct student *stuptr;
    stuptr = func();
    display(stuptr);
    free(stuptr);

    return 0;
}

void display(struct student *stuptr){
    printf("name :%s\troll no : %d\tmarks : %d",stuptr->name,stuptr->rollno,stuptr->marks);
}

struct student *func(){
    ptr = (struct student*)malloc(sizeof(struct student));
    strcpy(ptr->name,"deepti kumari");
    ptr->rollno=1;
    ptr->marks=88;
    return ptr;
}
