//insertion at the beginnig of a doubly linked list
#include<stdio.h>
#include<conio.h>
struct node {struct node *prev;struct node *next;int data;};
struct node *head=NULL;
void append(int num)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=num;
if(head==NULL)
{
temp->next=NULL;
temp->prev=NULL;
head=temp;      }
else
{
temp->next=head;
head->prev=temp;
head=temp;
}
}
void display()
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
clrscr();
append(90);
append(10);
append(56);
display();
getch();
}