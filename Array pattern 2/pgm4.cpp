//print odd numbers
#include<stdio.h>
int main(){
    int i,a[50],n;

    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter values ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("%d ",a[i]);
        }
    }
}