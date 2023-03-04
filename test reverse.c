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
    struct stack *n=(struct stack *)malloc(sizeof(struct stack));
    n->size=s->size;
    n->top=s->top;
    n->arr=(int *)malloc(n->size*sizeof(int));
    int i=s->top;
     int j=s->top;
     int k=n->top;

    while(i!=-1)
    {
        if((s->arr[i]%2)!=0)
        {
            n->arr[k]=s->arr[i];
            k--;
        }
        i--;
    }
    while(j!=-1)
    {
        if((s->arr[j]%2==0))
        {
            n->arr[k]=s->arr[j];
            k--;
        }
        j--;

    }
            while(s->top!=-1)
        {
            s->arr[s->top]=n->arr[n->top];
            s->top--;
            n->top--;

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
