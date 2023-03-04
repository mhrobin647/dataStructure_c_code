#include<stdio.h>
int main()
{
int a,b;
printf("Enter a integer:");
scanf("%d",&a);
printf("From 0 to %d integer are,",a);
b=0;
while(b<a){
    printf("\n%d",b);
    b++;
}
    return 0;
}

