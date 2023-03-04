#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h;
printf("To show all arithmetic operation\nEnter two number: ");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
printf("%d+%d=%d",a,b,c);
if(a>b){
  printf("\n%d-%d=%d",a,b,d);
}else if(d=b-a){
printf("\n%d-%d=%d",b,a,d);
}
e=a*b;
printf("\n%d*%d=%d",a,b,e);
f=a/b;
printf("\n%d/%d=%d",a,b,f);
g=a%b;
printf("%\n%dmod%d=%d",a,b,g);

    return 0;
}

