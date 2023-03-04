#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};
void element(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node *deletehead(struct node *head)
{
        struct node *ptr=head;
        head=head->next;
        free(ptr);
        return head;
}
struct node *deleteindex(struct node * head,int index)
{
        struct node *p=head;
        struct node *q=head->next;
        for(int i=0; i!=index-1; i++)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        return head;
}
struct node *deleteend(struct node *head)
{
        struct node *p=head;
        struct node *q=head->next;
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
        return head;
}

int main()
{
   /** node decelaration */

    struct node *head;
    struct node *first;
    struct node *secnd;
    struct node *third;

    /** node decelaration */
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    secnd=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    /** node decelaration */
    head->data=5;
    head->next=first;
    first->data=7;
    first->next=secnd;
    secnd->data=2;
    secnd->next=third;
    third->data=4;
    third->next=NULL;
    element(head);
    //head=deletehead(head);
   // printf("\nafter first delete\n");
    //element(head);
    printf("\nafter index delete\n");
    head=deleteindex(head,2);
    element(head);
     printf("\nafter index delete\n");
     head=deleteend(head);
     element(head);





    return 0;
}
