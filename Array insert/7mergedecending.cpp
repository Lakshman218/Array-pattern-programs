#include<stdio.h>
#include<stdlib.h>
int main(){
    int a3[100];
    int i,j,temp,n1,n2,n3,a1[10],a2[10];
    
    printf("Enter limit ");
    scanf("%d",&n1);
    printf("Enter %d numbers ",n1);
    for ( i = 0; i < n1; i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter limit ");
    scanf("%d",&n2);
    printf("Enter %d numbers ",n2);
    for ( i = 0; i < n2; i++){
        scanf("%d",&a2[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++){
        a3[i]=a1[i];
    }
    for(j=0;j<n2;j++){
        a3[i]=a2[j];
        i++;
    }
    for(i=0;i<n3-1;i++){
        for(j=i+1;j<n3;j++){
            if(a3[i]<=a3[j]){
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }
    }
    for(i=0;i<n3;i++){
        printf("%d ",a3[i]);
    }
    printf("\n\n");

}