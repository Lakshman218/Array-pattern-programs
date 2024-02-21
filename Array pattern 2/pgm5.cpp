//print sum of prime
#include<stdio.h>
int main(){
    int i,j,a[50],n,sum=0,flag;

    printf("Enter limit ");
    scanf("%d",&n);
    printf("Enter values ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        flag=0;
        if(a[i]==1)
        continue;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum=sum+a[i];
        }

    }
    printf("%d",sum);
}