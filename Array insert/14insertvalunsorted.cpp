#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int i,n,value,pos;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter value to insert ");
    scanf("%d",&value);
    printf("enter position to insert ");
    scanf("%d",&pos);

    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=value;
    for(i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    

}