#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Enter a number : ");
    scanf("%d",&a);

    c=0;
    sum=0;
    for(c = 0 ; c < a ; c++)
    {
        c=c*10+1;
        printf("%d\n",c);
        sum=sum+c;
    }
    printf("\n Sum of the seris is %d",sum);
    return 0;
}
