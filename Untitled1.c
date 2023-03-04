
#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *a;
};
//void PrintArray(int *a,int n)
//{
//    int i;
//    for(i=0; i<n; i++)
//    {
//        printf("Element is %d\n",a[i]);
//    }
//}
void enqueue(struct queue *k, int value)
{
    if(k->r==k->size)
    {
        printf("Queue is overflow.\n");
    }
    else
    {
        k->r++;
        k->a[k->r]=value;
        printf("element is %d.\n",k->a[k->r]);
    }
}

int main()

{
    struct queue *k=(struct queue *)malloc(sizeof(struct queue));
    k->size=20;
    k->f=-1;
    k->r=-1;
    k->a=(int *)malloc(k->size*sizeof(int));
    enqueue(k,4);
    //PrintArray(k->a,k->f);

    return 0;

}
