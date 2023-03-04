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
/** Insert first element */
struct node * insertfirst(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data= data;
    ptr->next=head;
    return ptr;
}
/** Insert index element */

struct node * insertindex(struct node *head,int data,int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data= data;
   int i=0;
    struct node *p=head;
    while (i !=index-1)
    {
        p=p->next;
        i++;
    }
    ptr -> next= p -> next;
    p->next=ptr;
    return head;

}
/** Insert end element */
struct node * insertend(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data= data;

    struct node *p=head;
    while (p->next!=NULL)
    {
        p=p->next;

    }
    p -> next= ptr;
    ptr->next=NULL;
    return head;
}

int main()
{

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *thrid;

    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    thrid=(struct node *)malloc(sizeof(struct node));

    head -> data=4;
    head -> next =first;
    first -> data=6;
    first-> next =second;
    second -> data=87;
    second -> next=thrid;
    thrid -> data=34;
    thrid -> next =NULL;
    element(head);
    head=insertfirst(head,54);
    printf("After insert for head :\n");
    element(head);
    head=insertindex(head,34,2);
    printf("After insert for index:\n");
    element(head);
    head=insertend(head,38);
    printf("After insert in end:\n");
    element(head);
    return 0;
}

