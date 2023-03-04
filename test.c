#include<stdio.h>

void PrintArray(int n,int a[n][n])
{
    int i,j;
    for( i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void input(int n, int a[][n])
{
    int i,j;
    for( i=0; i<n; i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int  magicvalue(int n)
{
    int value;
    value =((n*n)+1)/2;
    return value;
}
void rowclm(int n,int a[][n],int v)
{
    int r,c,i,j;
    r=c=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            r=r+a[i][j];
            c=c+a[i][j];
        }
    }
}
void digonal2(int n,int a[][n],int v)
{
    int i,j,d2;
    d2=0;
    for(i=0; i<n; i++)
    {
        for(j=0;j<n; j++)
        {
            if(i+j==n-1)
            d2=d2+a[i][j];
        }
    }
    rowclm(int n, int a[][n],int v);
}

int main()
{
    int i,j,m,n;
    printf("Please enter the desire grid dimension: \n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Please enter the desired input: ");
    input(n,a);
    int v=magicvalue(n);
    PrintArray(n,a);
    digonal2(n,a,v);

}
