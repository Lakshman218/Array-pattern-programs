#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100];
    int i,n;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    printf("max = %d",max);
    printf("\nmin = %d",min);
    

}