//to delete a node from the end of a doubly linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct dnode{int data;struct dnode *next;struct dnode *prev;};
struct dnode *head=NULL;
void append(int num)
{
struct dnode *q,*temp;
temp=(struct dnode *)malloc(sizeof(struct dnode));
temp->next=NULL;
temp->prev=NULL;
temp->data=num;
if(head==NULL)
{
head=temp;
}
else
{
q=head;
while(q->next!=NULL)
{
q=q->next;
}
q->next=temp;
temp->prev=q;
temp->next=NULL;
}
}
void deleteend()
{
struct dnode *r,*t;
t=(struct dnode *)malloc(sizeof(struct dnode));
r=head;
while(r->next!=NULL)
{
t=r;
r=r->next;
}
r->prev=NULL;
free(r);
t->next=NULL;
}
void display()
{
struct dnode *y;
y=head;
while(y!=NULL)
{
printf("\t %d",y->data);
y=y->next;
}
}
void main()
{clrscr();
append(43);
append(56);
append(45);
display();
printf("\n The linked list after deletion is:");
deleteend();
display();
getch();
}