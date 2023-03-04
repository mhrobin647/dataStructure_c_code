#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number :");
    scanf("%d",&a);
    c=1;
    while(a != 0)
    {
        b=a%10;
        c=c*b;
        a=a/10;
    }
    printf("Product of all digit is %d",c);
    return 0;
}
