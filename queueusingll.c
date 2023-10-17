#include<stdio.h>
#include<stdlib.h>

struct node
 {
  int data;
  struct node *next;
 }*head=NULL;
void enqueue(int);
void dequeue();

void display();
int main()
 {
  int choice;
  int value;
  while (1)
  {
   printf("\nMenu \n");
   printf("1-Enqueue \n 2-Dequeue \n 3-display \n 4-exit\n");
   printf("Enter your choice : ");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:
   {
    printf("Enter the value : ");
    scanf("%d",&value);
    enqueue(value);
    break;
   }
   case 2:
    dequeue();
    break;
   case 3:
    display();
    break;
   case 4:
     exit (0);
   default:
     printf("Invalid Choice");
   }
 }
}
void enqueue(int item)
{
 struct node *p,*temp;
 p = (struct node *) malloc(sizeof(struct node));
 if(p == NULL)
 {
  printf("\nOVERFLOW");
 }
else
{
p->data=item;
if(head == NULL)
{
p->next = NULL;
head = p;
}
else
{
temp = head;
while(temp->next!=NULL)
{
temp = temp->next;
}
temp->next = p;
p->next = NULL;
}

}
printf("\ninserted\n");
}
void dequeue()
{
struct node *p;
if(head == NULL)
{
printf("\n UNDERFLOW");
}
else if(head->next == NULL)
{
head = NULL;
free(head);
printf("\n deleted\n");
}
else
{
p = head;
head = head -> next;
free(p);
printf("\ndeleted\n");
}
}
void display()
{
struct node *p;
printf("\nPrinting values...\n");

p = head;
if(head==NULL)
{
printf("Empty");
}
else
{
while(p != NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
}
