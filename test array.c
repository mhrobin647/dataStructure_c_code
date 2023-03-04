#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void push(struct stack *s,int val)
{
    if(s->top==s->size)
    printf("stack is full.\n");
    else
    {
        s->top++;
        s->arr[s->top]=val;
    }

}

void PrintArray(int *arr,int n)
{
    struct stack *s;
    for(int i=n; i!=-1; i--)
    {
        printf("element is %d.\n",arr[i]);
    }
}
void required(struct stack *s)
{
    int i,tp,temp,j;
    i=0;j=s->top;
    while(j>i)
    {
        temp=s->arr[i];
        s->arr[i]=s->arr[j];
        s->arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
     struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=12;
    s->arr=(int *)malloc(s->size*(sizeof(int)));
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    PrintArray(s->arr,s->top);
    printf("\nafter required : \n");
    required(s);
    PrintArray(s->arr,s->top);
}
