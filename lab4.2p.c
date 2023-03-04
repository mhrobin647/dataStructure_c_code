#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a integer :");
    scanf("%d",&a);
    printf("from 1 to %d odd number are,",a);
    b=1;
    while(b<=a)
    {
        if(b%2==1)
            printf("\n%d",b);
        b++;
    }
    return 0;
}

