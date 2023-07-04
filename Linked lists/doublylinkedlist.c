#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *next;
    int data;
    struct node *prev;
}

struct node *create_list(struct node*start);
void display(struct node *start);
struct node *addtoempty(struct node *start , int data);
struct node *addatbeg(struct node*start,int data);
struct node *addatend(struct node*start, int data);
struct node *addafter(struct node*start, int data, int item);
struct node *addbefore(struct node*start, int data,int item);
struct node *del(struct node*start,int data);
sturct node *reverse(struct node*start);

int main()
{ 
     struct node*start=NULL;
    int choice, data,item;
    while(1){
        printf("\nEnter\n1 : create\n2 : display\n3 : add to empty list\n4 : add at beginning\n5 : Add at end\n6 : add after node\n7 : add before node\n8 : delete\n9 : reverse\n10 : quit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1 :
            start = create_list(start);
            break;
            
            case 2:
            display(start);
            break;
            
            case 3 :
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            start = addtoempty(start,data);
            break;
            
            case 4 :
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            start = addatbeg(start,data);
            break;
            
            case 5:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            start = addatend(start,data);
            break;
            
            case 6:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter element after which to be insert : ");
            scanf("%d",&item);
            start = addafter(start,data,item);
            break;
            
            case 7:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter the element before which to be insert : ");
            scanf("%d",&item);
            start = addbefore(start,data,item);
            break;
            
            case 8:
            printf("enter the element to be deleted : ");
            scanf("%d",&data);
            start = del(start,data);
            break;
            
            case 9:
            start = reverse(start);
            break;
            
            case 10:
            exit(1);
            
            default:
            printf("Wrong choice !!, Please choose a number from the above given options.");
        }
    }
}

struct node *create_list(struct node*start);

void display(struct node *start){
    struct node*p;
    
    if(start==NULL){
        printf("list is empty\n");
        return;
    }
    
    p=start;
    printf("list is :\n");
    while(p!=NULL){
        printf("%d\t",p->info);
        p=p->next;
    }
    
    
}

struct node *addtoempty(struct node *start , int data){
    struct node*tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->prev=NULL;
    tmp->next=NULL;
    start=tmp;
    return start;
}

struct node *addatbeg(struct node*start,int data){
    struct node* tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->prev=NULL;
    tmp->next=start;
    start->prev=tmp;
    start=tmp;
    return start;
}

struct node *addatend(struct node*start, int data){
    struct node*tmo;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p->next!=NULL){
        p=p->next;
    }
    tmp->next=NULL;
    tmp->prev=p;
    p->next=tmp;
    return start;
}

struct node *addafter(struct node*start, int data, int item){
    struct node *p , *tmp;
    tmp= (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p!=NULL){
        if(p->info=item){
            tmp->next=p->next;
            tmp->prev=p;
            if(p->next!=NULL){
                p->next->prev=tmp;
            }
            p->next=tmp;
            return start;
        }
        p=p->next;
    }
    printf("%d not present in list\n",item);
    return start;
}

struct node *addbefore(struct node*start, int data,int item){
    struct node *p,*tmp;
    if(start=NULL){
        printf("list is empty\n");
        return start;
    }
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    if(start->info==item){
        tmp->prev=NULL;
        tmp->next=start;
        start->prev=tmp;
        start=tmp;
        return start;
    }
    p=start;
    while(p!=NULL){
        if(p->info==item){
            tmp->prev=p->prev;
            tmp->next=p;
            p->prev->next=tmp;
            p->prev=tmp;
            return start;
        }
        p=p->next;
    }
    printf("%d item not found in the list\n",item)
    return start;
}

struct node *del(struct node*start,int data);
sturct node *reverse(struct node*start);
