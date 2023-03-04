#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void PrintArray(struct stack *ptr)
{
    while(ptr->top!=-1)
    {
        printf("Stack element in %d index is %d\n",ptr->top,ptr->arr[ptr->top]);
        ptr->top=ptr->top-1;
    }
}
struct stack  *required(struct stack *ptr)
{
    struct stack *p=ptr;
    int b,t;
    b=p->arr[0];
    t=p->top;
    while(p->top!=0)
    {
        p->arr[p->top-1]=p->arr[p->top];
        p->top=p->top-1;
    }
    ptr->arr[t]=b;
    return ptr;
}
void push(struct stack *ptr,int value)
{
    if(ptr->top==ptr->size)
        printf("Stack is overflow.\n");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
void pop(struct stack *ptr,int value)
{
    if(ptr->top==-1)
        printf("Stack is underflow.\n");
    else
    {
        ptr->top--;

    }
}
int main()

{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=9;
    s->top=-1;
    s->arr=(int *)malloc(s->size*(sizeof(int)));
//    isfull(s);
//    isempty(s);
    push(s,45);
    push(s,87);
    push(s,23);
    push(s,34);
    push(s,24);
//PrintArray(s);
s=required(s);
PrintArray(s);
    return 0;
}
