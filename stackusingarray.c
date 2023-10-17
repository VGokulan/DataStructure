#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,stack_arr[MAX];
push()
{
 int pushed_item;
 if(front==(MAX-1))
 printf(" Stack Overflow.");
 else
 {
 printf(" Enter the Item to be pushed : ");
 scanf("%d",&pushed_item);
 front++;
 stack_arr[front]=pushed_item;
 }
}
pop()
{
 if(front==-1)
 printf(" Stack Underflow.");
 else
 {
 printf(" Item %d is deleted from the stack.",stack_arr[front]);
 front--;
 }
}
display()
{
 int i;
 if(front==-1)
 printf(" Stack Empty.");
 else
 {
 printf(" Stack elements are....");
 for(i=front;i>=0;i--)
printf("\n %d ",stack_arr[i]);
 }
}
void main()
{
 int ch;
 while(1)
 {
 printf("\n Select your Operation: \n");
 printf(" 1. Push \n ");
 printf(" 2. Pop \n ");
 printf(" 3. Display \n ");
 printf(" 4. Exit \n ");
 printf("\n Enter your choice: ");
 scanf("%d",&ch);
 switch(ch)
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
 printf("\n Wrong Choice.");
 }
 }
}

