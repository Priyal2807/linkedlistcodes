//to insert at a specific position of a circular linked list
#include<stdio.h>
#include<conio.h>
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
t->next=t;//this statement is very important EXTREMELY
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
void insertpos(int num)
{
struct node *x,*y,*z;
int c=1,pos;
y=(struct node *)malloc(sizeof(struct node));
y->data=num;
x=head;
printf("\n Enter the position :");
scanf("%d",&pos);
while(c<pos)
{
z=x;
x=x->next;
c++;
}
y->next=x;
z->next=y;
}
void main()
{
clrscr();
append(45);
append(46);
append(47);
display();
printf("\n The linked list after insertion:\n");
insertpos(100);
display();
getch();
}