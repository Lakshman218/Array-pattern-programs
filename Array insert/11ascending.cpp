#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int i,j,n,temp;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

}