
#include <stdio.h>
#include<stdlib.h>
int N, M;
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
void createMatrix(int Adj[][N + 1],
                     int arr[][2])
{
    for (int i = 0; i < N + 1; i++)
    {

        for (int j = 0; j < N + 1; j++)
        {
            Adj[i][j] = 0;
        }
    }
    for (int i = 0; i < M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];
        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}
void printMatrix(int Adj[][N + 1])
{
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            printf("%d ", Adj[i][j]);
        }
        printf("\n");
    }
}
int main()
{
     struct queue q;
    q.size = 45;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    printf("Enter number of vertex : ");
    scanf("%d",&N);
    printf("Enter number of edge : ");
    scanf("%d",&M);
    printf("Enter edges : \n");
    int arr[N][2];
    int visited[N];
    int node;
    for(int j=0; j<N; j++)
    {
        visited[j]=0;
    }
    for(int i=0; i<N; i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);

    }
    int Adj[N + 1][N + 1];
    createMatrix(Adj, arr);
    //printMatrix(Adj);
    int i;
        printf("%d ",i);
    visited[i]=1;
    enqueue(&q,i);
    while(!isEmpty(&q))
    {
        node=dequeue(&q);
        for( int j=0; j<7; j++)
        {
            if(Adj[node][j]==1 && visited[j]==0)
            {
                printf("%d ",j);
                visited[j]=1;
                enqueue(&q,j);
            }
        }
    }
    return 0;
}

