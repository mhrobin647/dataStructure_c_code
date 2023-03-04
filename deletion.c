#include<stdio.h>
void main(){
    int a[]={3,4,2,6,3,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter the value which you want to delete : ");
    int v,t;
    t=0;
    scanf("%d",&v);
    for(int i=0;i<n;i++){
        if(a[i]==v){
            t++;
        }
        if(t!=0){
            a[i]=a[i+1];
        }
    }
    printf("Array element after deleting : ");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}