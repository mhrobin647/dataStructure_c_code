#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter an integer :");
    scanf("%d",&a);
    b=a%10;
    printf("last digit is %d \n\n",b);

    while(a>10)
        a=a/10;
    printf("first digit is  %d \n\n",a);
    c=a+b;
    printf("Sum of the first digit and last digit is %d",c);


    return 0;
}

