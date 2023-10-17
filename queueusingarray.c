#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=-1,rear=-1,queue_arr[MAX];
push()
{
 int pushed_item;
 if(rear==(MAX-1))
 printf("\n Queue Overflow.");
 else
 {
 if(front==-1)
 front++;
 printf("\n Enter the item to be pushed: ");
 scanf("%d",&pushed_item);
 rear++;
 queue_arr[rear]=pushed_item;
 }
}
pop()
{
 if(front>rear)
 printf("\n Queue Underflow.");
 else
 {
 printf("\n The element %d is removed from stack.",queue_arr[front]);
 front++;
 }
}
display()
{
 int i;
 if(front>rear)
 printf("\n Queue Underflow.");
 else
 {
 printf("\n Queue elements are.....");
 for(i=front;i<=rear;i++)
 printf(" %d ",queue_arr[i]);
 }
}
void main()
{
 int choice;
 while(1)
 {
 printf("\n Select a queue operation.....\n" );
 printf(" 1. Push \n ");
 printf(" 2. Pop \n ");
 printf(" 3. Display \n ");
 printf(" 4. Exit \n ");
 printf(" Enter your choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 push();
 break;
 case 2:
 pop();
 break;
 case 3:
 display();
 break;
 case 4:
 exit(0);
 default:
 printf("\n Wrong choice.");
 }
 }
}

