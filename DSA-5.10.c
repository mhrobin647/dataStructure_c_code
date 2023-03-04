#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *next;
    int data;
};
void element(struct node *head)
{
    struct node *ptr=head;
    printf("%d ",ptr->data);
    ptr=ptr->next;
    while(ptr!=head)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *first ;
    struct node *secnd;
     struct node *third;
     struct node *fourth;
     head=(struct node *)malloc(sizeof(struct node));
     first=(struct node *)malloc(sizeof(struct node));
     secnd=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     fourth=(struct node *)malloc(sizeof(struct node));
     head->data= 5;
     head->next=first;
     first->data= 4;
     first->next=secnd;
     secnd->data= 5;
    secnd->next=third;
     third->data= 6;
     third->next=fourth;
     fourth->data= 34;
     fourth->next=head;
     printf("Element of linked list :");
     element(head);


}
