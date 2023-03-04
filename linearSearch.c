#include<stdio.h>
int main(){
    int a[]={3,53,5,3,51,5};
    printf("Enter The element which you want to find : ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<6;i++){
        if(a[i]==n){
            printf("The element which you search at index %d\n",i+1);
        }
    }
    return 0;
}