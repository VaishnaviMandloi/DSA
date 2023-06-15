#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
    int marks[4];
};

int main()
{
    struct student stu[3];
    
    for (int i = 0; i < 3; i++) {
        printf("\nenter details of student %d :\nname : ",i+1);
        scanf("%s",stu[i].name);
        printf("roll no : ");
        scanf("%d",&stu[i].rollno);
        for (int j = 0; j < 4; j++) {
            printf("enter maks of subject %d : ", j+1);
            scanf("%d",&stu[i].marks[j]);
        }
        
    }
    printf("deatils of students :\n");
    
    for (int i = 0; i < 3; i++) {
        printf("\n\nname : %s\troll no. : %d\nMarks :",stu[i].name,stu[i].rollno);
        for (int j = 0; j < 4; j++) {
            printf("\tsubject %d : %d", j+1,stu[i].marks[j]);
        }
    }

    return 0;
}
