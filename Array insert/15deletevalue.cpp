#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int i,n,pos;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter position to delete ");
    scanf("%d",&pos);
    if(pos>n){
        printf("not possible");
    }
    else{
        for(i=pos-1;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

}