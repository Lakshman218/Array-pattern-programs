//print sum
#include<stdio.h>
int main(){
    int i,a[50],n,sum=0;

    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter values ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
        printf("%d",sum);
}