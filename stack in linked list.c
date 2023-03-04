
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};
/** print eliment */
void element(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *toop=NULL;

int isempty(struct node *top)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
int isfull(struct node *top)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
        return 1;
    else
        return 0;
}
struct node * push(struct node * top,int value)
{

    if(isfull(top))
        printf("Stack is overflow.\n");
    else
    {
        struct node * n =(struct node *)malloc(sizeof(struct node));
        n->data=value;
        n->next=top;
        top=n;
        return top;

    }
}

struct node *pop(struct node*top)
{
    if(isempty(top))
        printf("Stack is underflow.\n");
    else
    {
        struct node *n=top;
        top=top->next;
        free(n);
        return top;
    }
}
void peek(struct node * top,int i)
{
    struct node *ptr=top;
    for(int j=0;(j<i-1 && ptr!=NULL);j++)
    {
        ptr=ptr->next;
    }
        if(ptr!=NULL)
        {
            printf("peek element in %d position is %d\n",i,ptr->data);
        }else
        {
            printf("invalid\n");
        }
}
int main()
{
    toop =push(toop,4);
    toop=push(toop,6);
    toop=push(toop,3);
    toop=push(toop,8);
    peek(toop,3);
    if(isfull(toop))
        printf("Stack is full.\n");
    else
        printf("Stack is not full.\n");
    if(isempty(toop))
        printf("stack is empty.\n");
    else
        printf("Stack is not empty.\n");
    element(toop);
    toop=pop(toop);
    printf("After popped :\n");
    element(toop);
    peek(toop,3);
    return 0;
}
