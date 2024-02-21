//insert value in a specified position
#include<stdio.h>
int main(){
    int i,a[50],n,pos,value;

    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value to insert ");
    scanf("%d",&value);
    printf("Enter value to insert ");
    scanf("%d",&pos);
    

    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        a[i]=value;
    }
    for(i=0;i<n+1;i++){
        printf("%d ",a[i]);
    }
}