// to insert a node at the beginning of  a singly linked list
#include<stdio.h>
#include<conio.h>
struct node {struct node *next;int data;};
void append(struct node **q,int num)
{
struct node *t;
t=(struct node *)malloc(sizeof(struct node));
t->data=num;
t->next=NULL;
if(*q==NULL)
{
*q=t;}
else
{
t->next=*q;
*q=t;
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
append(&head,34);
append(&head,56);
append(&head,57);
printf("\n The linked list is \n");
display(head);
getch();
}
