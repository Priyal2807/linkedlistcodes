//to concadenate two singly linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{int data;struct node *next;};
void display(struct node *a)
{
struct node *temp;
temp=a;
while(temp!=NULL)
{
printf("\n %d",temp->data);
temp=temp->next;
}
}
void concat(struct node *a,struct node *b)
{
if((a!=NULL)&&(b!=NULL))
{
if(a->next==NULL)
{a->next=b;}
else
{concat(a->next,b);}
}
else
{printf("\n Either of the heads are null");}
}
void main()
{
int n,i;
int f=1;int r=2;
struct node *a,*b,*prev,*p;
clrscr();
printf("\n Enter no.of the elements for the node:");
scanf("%d",&n);
a=NULL;
for(i=0;i<n;i++)
{
p=malloc(sizeof(struct node));
printf("\n Enter the data for %d node of list %d:",i,f);
scanf("%d",&p->data);
p->next=NULL;
if(a==NULL)
{a=p;}
else
{prev->next=p;}
prev=p;       }
printf("\n Enter no.of elements for the other list:") ;
scanf("%d",&n);
b=NULL;
for(i=0;i<n;i++)
{
p=malloc(sizeof(struct node));
printf("\n Enter the data for %d node of list %d:",i,r);
scanf("%d",&p->data);
p->next=NULL;
if(b==NULL)
{b=p;}
else
{prev->next=p;}
prev=p;
}
concat(a,b);
display(a);
getch();
}
