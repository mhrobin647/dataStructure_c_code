#include<stdio.h>
int main()
{
    int N;
    printf("Enter array size : ");
    scanf("%d",&N);
    int ar[N],i,temp,j;
    printf("Enter array element : ");
    for (i=0; i<N; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(ar[i]>ar[j])
               {
                 temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
               }
        }
    }
    printf("sorting elements : ");
    for(i=0; i<N; i++)
    {
        printf("%d ",ar[i]);
    }


    return 0;
}
