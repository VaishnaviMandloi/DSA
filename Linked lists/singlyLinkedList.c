#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *create_list(struct node*start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start , int data);
struct node *addatbeg(struct node*start,int data);
struct node *addatend(struct node*start, int data);
struct node *addafter(struct node*start, int data, int item);
struct node *addbefore(struct node*start, int data,int item);
struct node*addatpos(struct node*start,int data,int pos);
struct node *del(struct node*start,int data);
struct node *reverse(struct node*start);

int main()
{
    struct node*start=NULL;
    int choice, data,item,pos;
    while(1){
        printf("\nEnter\n1 : create\n2 : display\n3 : count\n4 : search\n5 : add to empty list/add at beginning\n6 : Add at end\n7 : add after node\n8 : add before node\n9 : add at position\n10 : delete\n11 : reverse\n12 : quit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1 :
            start = create_list(start);
            break;
            
            case 2:
            display(start);
            break;
            
            case 3:
            count(start);
            break;
            
            case 4 :
            printf("enter element to be searched : ");
            scanf("%d",&data);
            search(start,data);
            break;
            
            case 5 :
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            start = addatbeg(start,data);
            break;
            
            case 6:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            start = addatend(start,data);
            break;
            
            case 7:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter element after which to be insert : ");
            scanf("%d",&item);
            start = addafter(start,data,item);
            break;
            
            case 8:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter the element before which to be insert : ");
            scanf("%d",&item);
            start = addbefore(start,data,item);
            break;
            
            case 9:
            printf("enter the element to be inserted : ");
            scanf("%d",&data);
            printf("enter the position at which to insert : ");
            scanf("%d",&pos);
            start = addatpos(start,data,pos);
            break;
            
            case 10:
            printf("enter the element to be deleted : ");
            scanf("%d",&data);
            start = del(start,data);
            break;
            
            case 11:
            start = reverse(start);
            break;
            
            case 12:
            exit(1);
            
            default:
            printf("Wrong choice !!, Please choose a number from the above given options.");
        }
    }
}
    
struct node *create_list(struct node*start){
    int i, n ,data;
    
    printf("enter the number of nodes you want to insert : ");
    scanf("%d",&n);
    
    start=NULL;
    if(n==0){
        return start;
    }
    printf("enter the element to be inserted at position 1 : ");
    scanf("%d",&data);
    start = addatbeg(start,data);
    for(i=2;i<=n;i++){
        printf("enter the element to be inserted at position %d : ",i);
        scanf("%d",&data);
        start = addatend(start,data);
    }
    return start;
}

void display(struct node *start){
    struct node *p;
    if(start==NULL){
        printf("list is empty\n");
        return;
    }
    p=start;
    printf("list is :\n");
    while(p!=NULL){
        printf("%d ",p->info);
        p=p->link;
    }
    
}

void count(struct node *start){
    struct node* p;
    int cnt=0;
    p=start;
    while(p!=NULL){
        cnt++;
        p=p->link;
    }
    printf("Total number of elements are %d\n",cnt);
}

void search(struct node *start , int data){
    struct node*p;
    p=start;
    int pos =1;
    while(p!=NULL){
        if(p->info==data){
            printf(" the element is at position %d\n",pos);
            return;
        }
        p=p->link;
        pos++;
    }
    printf("the item %d is not present in the list\n,data");
}

struct node *addatbeg(struct node*start,int data){
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
}

struct node *addatend(struct node*start, int data){
    struct node *p,*tmp;
    tmp =(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p->link!=NULL){
        p=p->link;
    }
    p->link=tmp;
    tmp->link=NULL;
    return start;
}

struct node *addafter(struct node*start, int data, int item){
    struct node *tmp,*p;
    p=start;
    while(p!=NULL){
        if(p->info==item){
            tmp = (struct node*)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            p->link=tmp;
            return start;
        }
        p=p->link;
    }
    printf("the item %d is not present in the list\n",item);
}

struct node *addbefore(struct node*start, int data,int item){
    struct node *tmp,*p;
    if(start==NULL){
        printf("list is empty\z");
        return start;
    }
    if(item==start->info){
        tmp = (struct node*)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
    }
    while(p->link!=NULL){
        if(p->link->info==item){
            tmp =(struct node*)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link=p->link;
            p->link=tmp;
            return start;
        }
        p=p->link;
    }
    printf("%d is not present in the list\n",item);
    return start;
}

struct node*addatpos(struct node*start,int data,int pos){
    struct node *tmp ,*p;
    int i;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info= data;
    
    if(pos==1){
        tmp->link =start;
        start=tmp;
        return start;
    }
    
    p =start;
    for(i=1;i<pos-1;i++){
        p=p->link;
    }
    if(p==NULL){
        print("there are less then %d elements\n",pos);
    }
    else{
        tmp->link=p->link;
        p->link=tmp;
    }
    return start;
}

struct node *del(struct node*start,int data){
    struct node *tmp,*p;
    if(start==NULL){
        printf("list is empty");
        return start;
    }
    if(start->info==data){
        tmp=start;
        start=start->link;
        free(tmp);
        return start;
    }
    p=start;
    while(p->link!=NULL){
        if(p->link->info=+data){
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return start;
        }
        p=p->link;
    }
    printf("element %d is not found in the list",data);
    return start;
}

sturct node *reverse(struct node*start)struct node *reverse(struct node*start){
    struct node *prev, *ptr, *next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL){
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    start=prev;
    return start;
}
