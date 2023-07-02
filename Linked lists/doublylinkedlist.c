#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *next;
    int data;
    struct node *prev;
}

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
sturct node *reverse(struct node*start);
