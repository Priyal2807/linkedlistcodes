//to insert at the beginning of a circular linked list
#include<stdio.h>
#include<conio.h>
struct node {struct node *next;int data;};
struct node *head=NULL;
void append(int num)
{
struct node *temp,*p;
p=(struct node *)malloc(sizeof(struct node));
p->data=num;

if(head==NULL)
{ p->next=p;
head=p;}
else
{ struct node *x;
x=head;
p->next=head;
while(x->next!=head)
{
x=x->next;}
head=p;
x->next=head;
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
append(80);
append(68);
append(78);
printf("\n");
display();
getch();
}