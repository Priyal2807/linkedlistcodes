//to delete from a specific position from a doubly linked list
#include<stdio.h>
#include<conio.h>
struct node {struct node *prev;int data;struct node *next;};
struct node *head=NULL;
void append(int num)
{
struct node *temp,*p;
p=(struct node *)malloc(sizeof(struct node));
p->data=num;
if(head==NULL)
{
p->next=NULL;
p->prev=NULL;
head=p;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=p;
p->prev=temp;
p->next=NULL;
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
void deletepos()
{
struct node *x,*z;
int c=1,pos;
x=head;
printf("\n Enter the position :");
scanf("%d",&pos);
while(c<pos)
{
z=x;
x=x->next;
c++;
}
z->next=x->next;
x->next->prev=z;
free(x);
}
void main()
{
clrscr();
append(45);
append(46);
append(47);
printf("\n The linked list is :");
display();
printf("\n");
printf("\n The linked list after deletion:\n");
deletepos();
display();
getch();
}