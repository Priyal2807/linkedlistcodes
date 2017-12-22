//to delete a node from a specific position of a singly linked list 
#include<stdio.h>
#include<conio.h>
struct node {struct node *next;int data;};
void append(struct node **q,int num)
{
struct node *p,*temp;
p=(struct node *)malloc(sizeof(struct node ));
p->data=num;
p->next=NULL;
if(*q==NULL)
{
*q=p;
}
else
{
temp=*q;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=p;
p->next=NULL;
}
}
void deletepos(struct node **q)
{
int c=0,pos;
struct node *x,*z;
x=*q;
printf("\n Enter the position :");
scanf("%d",&pos);
while(c<pos)
{
z=x;
x=x->next;
c++;
}
z->next=x->next;
free(x);
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
append(&head,40);
append(&head,50);
append(&head,60);
printf("\n The linked list is \n:");
display(head);
printf("\n The linked list after deletion \n :");
deletepos(&head);
display(head);
getch();
}