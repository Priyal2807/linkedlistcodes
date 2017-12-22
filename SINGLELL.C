#include<stdio.h>
#include<conio.h>
struct node {struct node *next;int data;};
void append(struct node **q,int num)  //insertion at end singly linked list
{
struct node *t,*temp;
t=(struct node *)malloc(sizeof(struct node));
t->data=num;
t->next=NULL;
if(*q==NULL)
{
*q=t;}
else
{
temp=*q;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=t;
t->next=NULL;
}
}
void display(struct node *head)
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
printf("\t %d",temp->data);
temp=temp->next;
}
}
void main()
{
struct node *head=NULL;
clrscr();
append(&head,45);
append(&head,44);
append(&head,78);
display(head);
getch();
}