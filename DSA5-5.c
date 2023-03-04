#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};
int  element(struct node * ptr)
{
    int n=1;
    while(ptr !=NULL)
    {
        //printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
        n++;

    }
    return n-1;
}
void element1(struct node * ptr)
{

    while(ptr !=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;

    }
}
int main()
{
    struct node *head;
    struct node *first;
    struct node * secnd;
    struct node * third;
    struct node * fourth;
    head=(struct node*)malloc(sizeof(struct node));
    first= (struct node *)malloc(sizeof(struct node));
    secnd=(struct node *)malloc( sizeof(struct node));
    third=(struct node *)malloc( sizeof(struct node));
    fourth=(struct node *)malloc( sizeof(struct node));
    head->data=4;
    head->next=first;
    first->data=2;
    first->next=secnd;
    secnd->data=5;
    secnd->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=34;
    fourth->next=NULL;
    printf("Element of linked list is : \n");
    element1(head);
    int n;
    n=element(head);
    printf("Number of element is %d",n);

    return 0;
}
