// unique elememts
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100];
    int i,n,j;
    printf("Enter limit ");
    scanf("%d",&n);                                                                                                          
    printf("Enter %d numbers ",n);
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("uniqe elements are \n");
    for(i=0;i<n;i++){
        int ctr=0;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                ctr=1;
                break;   
            }
        }
        if(ctr==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    

}