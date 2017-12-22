//to add a node at the beginning of a doubly linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node {struct node *prev;int info;struct node *next;};
struct node *head=NULL;
void addatbeg(int num)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=num;
if(head==NULL)
{
temp->prev=NULL;
temp->next=NULL;
head=temp;
}
else
{
head->prev=temp;
temp->prev=NULL;
temp->next=head;
head=temp;
}
}
void display(struct node *head)
{
struct node *q;
q=head;
while(q!=NULL)
{
printf("%d \t",q->info);
q=q->next;}
}
void main()
{
addatbeg(20);
addatbeg(1199);
addatbeg(245);
clrscr();
display(head);
getch();
}



