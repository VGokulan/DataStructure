#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}
*top=NULL;

void push(int);
void pop();
void display();
int main()
{
    int choice;
    int value;
    while(1)
    {
        printf("\n Menu\n");
        printf("1-push\n 2-pop\n 3-display\n 4-exit\n");
        printf("enter your choice:" );
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("enter the value: ");
                scanf("%d",&value);
                push(value);
                break;
            }
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}
void push(int val)
{
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("stack overflow");
    }
    else
    {
        if(top==NULL)
        {
            temp->data = val;
            temp->next=NULL;
            top=temp;
        }
        else
        {
            temp->data = val;
            temp->next = top;
            top = temp;
        }
    }
}
void pop()
{
    struct node *temp;
    if (top==NULL)
    {
        printf("stack Underflow");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if(temp==NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}
