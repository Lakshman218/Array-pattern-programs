#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int i,n,l1,l2;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    l1=a[0];
    l2=a[1];
    for(i=0;i<n;i++){
        if(a[i]<l1){
            l2=l1;
            l1=a[i];
        }
        else if(a[i]<l2 && a[i]>l1){
            l2=a[i];
        }
    }
    printf("smallest numbeer is %d",l1);
    printf("\nsecond smallest numbeer is %d",l2);
    

}