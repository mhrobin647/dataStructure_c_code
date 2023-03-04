#include<stdio.h>
int binarySearch(int a[],int l,int h,int v){
    while(l<h){
       int  m=(l+h)/2;
        if(a[m]==v){
            return m;
        }
        if(a[m]< v){
            l=m+1;
        }
        if(a[m]>v){
            h=m-1;
        }
    }
    return -1;
}
void main(){
    int a[]={2,4,2,5,3,6};
    printf("Enter the value which you find  : ");
    int v;
    scanf("%d",&v);
   int result= binarySearch(a,0,5,v);
   if(result==-1){
    printf("The value which you search can not find.");
   }else{
    printf("The value which you search find at index %d",result+1);
   }
    

}
