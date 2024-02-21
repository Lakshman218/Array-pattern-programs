#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100],a1[10],a2[3];
    int i,j=0,k=0,n;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            a1[j]=a[i];
            j++;
        }
        else{
            a2[k]=a[i];
            k++;
        }
    }
    printf("even values ");
    for(i=0;i<j;i++){
        printf("%d ",a1[i]);
    }
    printf("\nodd values ");
    for(i=0;i<k;i++){
        printf("%d ",a2[i]);
    }
    printf("\n");
    

}