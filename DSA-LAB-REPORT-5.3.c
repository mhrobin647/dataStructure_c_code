#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;

};
void element(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
void searchelement(struct node *head,int value)
{
    struct node *ptr=head;
    int index=0;
    while(ptr->next!=NULL)
    {
        if(ptr->data==value)
        {
            printf("\nThe value is found in index %d",index);
            break;
        }
        ptr=ptr->next;
        index++;

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
    printf("Linked list element are : ");
    element(head);
    searchelement(head,5);
    return 0;
}
