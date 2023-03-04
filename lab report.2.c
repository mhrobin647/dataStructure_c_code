#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,f,swap,first,end,number;
printf("Enter a number :");
scanf("%d",&a);
d=log10(a);
c=pow(10,d);
first=a / c;
printf("First digit is %d",first);
a=a%c;
end=a%10;
printf("\nLast digit is %d",end);
number=a / 10;
swap=end*c+number*10+first;
printf("\nSwap of the number is %d",swap);


    return 0;
}

