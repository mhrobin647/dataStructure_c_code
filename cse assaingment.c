#include<stdio.h>

float avarage(float id[10])


int main()
{
    int id[9],i,Id,rem,temp,res;
    printf("Enter your ID : ");
    scanf("%d",&Id);
    temp=Id;
    i=0;
    while(temp!=0)
    {
        rem = temp%10;
        id[i] = rem;
        temp = temp/10;
        i++;
    }
res=avarage(id);

    printf("%d",res);










}
float avarage(float id[9])
{
    int i;
    float sum=0.0;
    for(i=0 ; i<9 ; i++)
    {
        sum = sum + id[i];

    }
    return sum/9;
}



