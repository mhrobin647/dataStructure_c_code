#include<stdio.h>
int main()
{
    int N;
    printf("Input size of the array 1: ");
    scanf("%d",&N);
    int ar[N],small,large,i,dif;
    printf("Input elements of array 1: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    large=ar[0];
    small=ar[0];
    for(i=1;i<N;i++)
    {
        if(large<ar[i])
        {
            large=ar[i];

        }
        if(small>ar[i])
        {
            small=ar[i];

        }
    }
    dif=large-small;
    printf("Difference between Max and Min: %d",dif);


    getch();
}

