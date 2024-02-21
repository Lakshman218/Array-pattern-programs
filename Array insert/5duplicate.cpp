// duplicate elememts
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,a[10],ctr=0;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter numbers ");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                ctr++;
                break;
            }
            
        }
        
    }
    printf("no of duplicate %d\n",ctr);
    

}