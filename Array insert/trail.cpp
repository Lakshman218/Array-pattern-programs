#include<stdio.h>
#include<conio.h>
int main(void) {
    int a1[50][50],a2[50][50],asum[50][50];
    int i,j,n;
    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter values for 1st matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter values for 2st matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    printf("1st matrix is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a1[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            asum[i][j]=a1[i][j]+a2[i][j]; 
        }
    }
    printf("added matrix is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",asum[i][j]);
        }
        printf("\n");
    }
    
    
}