#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *create_list(struct node*last);
void display(struct node *last);
struct node*addtoempty(struct node*last,int data);
struct node *addatbeg(struct node*last,int data);
struct node *addatend(struct node*last, int data);
struct node *addafter(struct node*last, int data, int item);
struct node *del(struct node*last,int data);

int main()
{
    struct node*last=NULL;
    int choice, data,item;
    while(1){
        printf("\nEnter\n1 : create\n2 : display\n3 : add to empty list\n4 : add at beginning\n5 : Add at end\n6 : add after node\n7 : delete\n8 : quit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1 :
            last = create_list(last);
            break;
            
            case 2:
            display(last);
            break;
            
            case 3:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            last = addtoempty(last,data);
            break;
            
            case 4:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            last = addatbeg(last,data);
            break;
            
            case 5:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            last = addatend(last,data);
            break;
            
            case 6:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter element after which to be insert : ");
            scanf("%d",&item);
            last = addafter(last,data,item);
            break;
            
            case 7:
            printf("enter the element to be deleted : ");
            scanf("%d",&data);
            last = del(last,data);
            break;
            
            case 8:
            exit(1);
            
            default:
            printf("Wrong choice !!, Please choose a number from the above given options.");
        }
    }
}

struct node *create_list(struct node*last);
void display(struct node *last){
    struct node* p;
    if(last==NULL){
        printf("list is empty\n");
        return ;
    }
    p = last->link;
    do{
        printf("%d\t",p->info);
        p=p->link;
    }while(p!=last->link);
}

struct node*addtoempty(struct node*last,int data);
struct node *addatbeg(struct node*last,int data);
struct node *addatend(struct node*last, int data);
struct node *addafter(struct node*last, int data, int item);
struct node *del(struct node*last,int data);
