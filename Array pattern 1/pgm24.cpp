// blank x
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
          if(j==i || i+j==2*n){
            printf("%d",i);
          }
          else{
            printf(" ");
          }
        }
        printf("\n");
       
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=2*n;j++){
          if(j==i || i+j==2*n){
            printf("%d",i);
          }
          else{
            printf(" ");
          }
        }
        printf("\n");  
    }
}