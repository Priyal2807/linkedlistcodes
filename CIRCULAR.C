#include<stdio.h>
#include<conio.h>
//to insert at the end of a circular linked list
#include<malloc.h>
struct node {struct node *next;int data;};
struct node *head=NULL;
void append(int num)
{
struct node *t,*temp;
t=(struct node *)malloc(sizeof(struct node));
t->data=num;
if(head==NULL)
{
t->next=t;//this statement is very important 
head=t;}
else
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=t;
t->next=head;
}
}
void display()
{
struct node *temp;
temp=head;
printf("\t %d",temp->data);
temp=temp->next;
while(temp!=head)
{
printf("\t %d",temp->data);
temp=temp->next;
}
}
void main()
{
clrscr();
append(45);
append(46);
append(47);
display();
getch();
}