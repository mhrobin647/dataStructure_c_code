#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node * next;
    int data;
};
void element(struct node * ptr)
{
    while(ptr !=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *reverse(struct node *head)
{
    struct node * prenode,*curentnode,*nextnode;
    curentnode=head;
    prenode=0;
    curentnode=nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        curentnode->next=prenode;
        prenode=curentnode;
        curentnode=nextnode;
    }
    head=prenode;
    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *thrid;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    thrid=(struct node*)malloc(sizeof(struct node));
    head->data=4;
    head->next=first;
    first->data=87;
    first->next=second;
    second->data=34;
    second->next=thrid;
    thrid->data=34;
    thrid->next=NULL;
    element(head);
    head=reverse(head);
    printf("The element of linked list after reverse :\n");
    element(head);

 return 0;
}
