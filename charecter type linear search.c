#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int i,j;
    char a[n],k;
    printf("Enter array elements : ");
     fflush(stdin);
    gets(a);
    fflush(stdin);
    printf("\nEnter the value which you want to find : ");
    scanf("%c",&k);
    j=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            j++;
        }

    }
    if(j!=0)
        printf("Element is found");
    else
        printf("Element is not found");



    getch();
}

