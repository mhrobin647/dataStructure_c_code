#include <stdio.h>
int N, M;
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
    int Adj[N + 1][N + 1];
    createMatrix(Adj, arr);
    printMatrix(Adj);
    return 0;
}

