
#include<stdio.h>
#include<stdlib.h>
int M,N;


void visit(int *visited,int n)
{
    for(int i=0;i<n; i++)
    {
        visited[i]=0;
    }
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
    void dfs(int i,int *visited,int *a)
    {
        int j;
        printf("%d ",i);
        visited[i]=1;
        for(int j=0; j<7; j++)
        {
            if(a[i][j]==1 && !visited[j])
            {
                dfs(j);
            }
        }
    }
    int main()
    {
        int visited[N];
        printf("Enter number of vertex : ");
    scanf("%d",&N);
    printf("Enter number of edge : ");
    scanf("%d",&M);
    printf("Enter edges : \n");
    int arr[N][2];
    for(int i=0; i<N; i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);

    }
    visit(visited,N);
    int Adj[N + 1][N + 1];
    createMatrix(Adj, arr);
        dfs(0,visited,arr);
    }
